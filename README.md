# Word Count and Vertical Histogram Generation Using File Handling in C on Linux

A C programming project that reads words from a text file, analyzes their lengths, and generates a vertical frequency histogram in the Linux terminal.

The project demonstrates fundamental C programming concepts along with Linux-based compilation, file handling, and command-line execution.

## Project Overview

The program reads an input text file and determines how many words have each length.

The results are displayed as a vertical histogram in the terminal, with words longer than 20 characters grouped into a `21+` category.

## Features

- File handling in C
- Character-by-character file reading
- Word length analysis
- Frequency counting using arrays
- Vertical histogram generation
- Command-line file input
- Compilation and execution using GCC on Linux
- Handling of words longer than 20 characters

## Technologies and Concepts

**Programming Language**
- C

**Platform**
- Linux / Ubuntu

**Compiler**
- GCC

**Concepts Used**
- Variables and arrays
- Functions
- File handling
- `fopen()` / `fgetc()` / `fclose()`
- Conditional statements
- Loops
- Character handling
- Command-line arguments
- Frequency counting
- Terminal-based output

## Project Structure

```text
Word-Count-Vertical-Histogram-C-Linux/
|
|-- src/
|   `-- word_histogram.c
|
|-- input/
|   `-- words.txt
|
|-- screenshots/
|   |-- 01_compilation.png
|   |-- 02_input_file.png
|   `-- 03_program_output.png
|
|-- docs/
|   `-- Linux_Report.pdf
|
|-- README.md
`-- .gitignore
