# LAB 02: C Programming Basics

## Introduction

This lab focuses on basic C programming, the GCC compilation process, and program execution in Linux. The practical work demonstrates how a C program is transformed from source code into an executable through different compilation stages.

## Objectives

* Understand the basic structure of a C program.
* Practice compiling and executing C programs using GCC.
* Understand the four stages of C compilation.
* Generate and examine preprocessed, assembly, and object files.
* Understand program return values and exit status.
* Use Linux commands to verify compilation and program execution.

## Lab Work

### 1. C Program

The `sam.c` file contains the C source code used for the practical exercises.

### 2. GCC Compilation Stages

The C program was processed through the four stages of compilation:

| Stage         | Command                 | Output  |
| ------------- | ----------------------- | ------- |
| Preprocessing | `gcc -E sam.c -o sam.i` | `sam.i` |
| Compilation   | `gcc -S sam.i -o sam.s` | `sam.s` |
| Assembly      | `gcc -c sam.s -o sam.o` | `sam.o` |
| Linking       | `gcc sam.o -o sam`      | `sam`   |

These stages demonstrate how C source code is converted into an executable program.

### 3. Return Value and Exit Status

Program execution status was checked using:

```bash
./sam
echo $?
```

The return value from `main()` is passed to the operating system as the program's exit status.

## Files Included

* `sam.c` — C source code
* `sam.i` — Preprocessed C file
* `sam.s` — Assembly code
* `sam.o` — Object file
* `sam` — Compiled executable

## Tools Used

* Ubuntu Linux
* GCC Compiler
* Bash Terminal
* C Programming Language

## Conclusion

This lab provided practical understanding of C programming, GCC compilation stages, and program exit status. It demonstrated the transformation of C source code into an executable program through preprocessing, compilation, assembly, and linking.

