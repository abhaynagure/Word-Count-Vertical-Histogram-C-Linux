#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD_LENGTH 20

static void count_word_lengths(FILE *file, int counts[], int *overflow_count) {
    int ch;
    int length = 0;

    while ((ch = fgetc(file)) != EOF) {
        if (isspace((unsigned char)ch)) {
            if (length > 0) {
                if (length <= MAX_WORD_LENGTH) {
                    counts[length]++;
                } else {
                    (*overflow_count)++;
                }
                length = 0;
            }
        } else {
            length++;
        }
    }

    if (length > 0) {
        if (length <= MAX_WORD_LENGTH) {
            counts[length]++;
        } else {
            (*overflow_count)++;
        }
    }
}

static int max_count(const int counts[], int overflow_count) {
    int max = overflow_count;

    for (int i = 1; i <= MAX_WORD_LENGTH; i++) {
        if (counts[i] > max) {
            max = counts[i];
        }
    }

    return max;
}

static void print_vertical_histogram(const int counts[], int overflow_count) {
    int max = max_count(counts, overflow_count);

    printf("Word Length Frequency Histogram\n");
    printf("Words longer than %d characters are grouped as %d+.\n\n",
           MAX_WORD_LENGTH, MAX_WORD_LENGTH + 1);

    for (int row = max; row > 0; row--) {
        printf("%2d |", row);
        for (int length = 1; length <= MAX_WORD_LENGTH; length++) {
            printf(" %c ", counts[length] >= row ? '#' : ' ');
        }
        printf(" %c\n", overflow_count >= row ? '#' : ' ');
    }

    printf("   +");
    for (int length = 1; length <= MAX_WORD_LENGTH; length++) {
        printf("---");
    }
    printf("---\n");

    printf("    ");
    for (int length = 1; length <= MAX_WORD_LENGTH; length++) {
        printf("%2d ", length);
    }
    printf("%2d+\n", MAX_WORD_LENGTH + 1);
}

int main(int argc, char *argv[]) {
    const char *input_path = argc > 1 ? argv[1] : "input/words.txt";
    FILE *file = fopen(input_path, "r");

    if (file == NULL) {
        fprintf(stderr, "Error: could not open '%s'.\n", input_path);
        return EXIT_FAILURE;
    }

    int counts[MAX_WORD_LENGTH + 1] = {0};
    int overflow_count = 0;

    count_word_lengths(file, counts, &overflow_count);
    fclose(file);

    print_vertical_histogram(counts, overflow_count);
    return EXIT_SUCCESS;
}
