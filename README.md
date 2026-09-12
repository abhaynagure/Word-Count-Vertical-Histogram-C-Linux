# Word Count Vertical Histogram in C for Linux

This repository contains a small C program that reads words from a text file and prints a vertical histogram showing how many words have each length.

## Project Structure

```text
Word-Count-Vertical-Histogram-C-Linux/
|-- src/
|   `-- word_histogram.c
|-- input/
|   `-- words.txt
|-- screenshots/
|   |-- 01_compilation.png
|   |-- 02_input_file.png
|   `-- 03_program_output.png
|-- docs/
|   `-- Linux_Report.pdf
|-- README.md
`-- .gitignore
```

## Build

From the repository root, compile the program with:

```bash
gcc src/word_histogram.c -o word_histogram
```

## Run

Use the included sample input:

```bash
./word_histogram input/words.txt
```

You can also pass another text file:

```bash
./word_histogram path/to/your/file.txt
```

## What It Does

- Reads a text file one character at a time.
- Counts each word by length.
- Groups words longer than 20 characters into a `21+` column.
- Prints a vertical terminal histogram.

## Example Output

```text
Word Length Frequency Histogram
Words longer than 20 characters are grouped as 21+.

 9 |          #  #
 8 |          #  #
 7 |          #  #
 6 |          #  #
 5 |          #  #  #     #
 4 |          #  #  #     #
 3 |    #     #  #  #     #
 2 | #  #  #  #  #  #     #
 1 | #  #  #  #  #  #  #  #  #  #
   +---------------------------------------------------------------
     1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 21+
```

## Included Screenshots

The `screenshots/` folder contains images showing compilation, the input file, and sample program output.
