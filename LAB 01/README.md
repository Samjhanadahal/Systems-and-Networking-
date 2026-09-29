# LAB 01: Linux Files, APT, and C Programming

## Introduction

This lab provides practical experience with the Linux command line, file and directory operations, APT package management, and basic C programming. The activities were performed using Ubuntu and the GCC compiler.

## Objectives

* Perform basic file and directory operations using Linux commands.
* Create, edit, view, copy, rename, and remove files.
* Understand basic file permissions.
* Use APT for package management.
* Install and verify the GCC compiler.
* Write, compile, execute, and modify a C program.
* Practice recompiling a program after making changes.
* Verify the files and program created during the lab.

## Lab Activities

### 1. File Operations

The lab covered essential Linux file and directory commands, including:

* `mkdir` – create directories
* `cd` – navigate between directories
* `nano` – create and edit files
* `cat` – view file contents
* `cp` – copy files
* `mv` – move or rename files
* `rm` – remove files
* `rmdir` – remove empty directories
* `ls -l` – view file details and permissions

A `greeting.txt` file was created and used to practice these operations.

### 2. APT Package Management

APT commands were used to manage software packages in Ubuntu. The GCC compiler was installed through the `build-essential` package, and the installation was verified using:

```bash
gcc --version
```

Package searching was also practiced using:

```bash
apt search python3
```

### 3. C Programming

A simple C program was created in `hello.c` to display a greeting and calculate the sum of two numbers.

The program was compiled using GCC:

```bash
gcc hello.c -o hello_program
```

The compiled program was then executed using:

```bash
./hello_program
```

The program was also compiled with warnings enabled using:

```bash
gcc -Wall hello.c -o hello_program_warn
```

The source code was modified and recompiled to observe the changes in program output.

### 4. Verification

The final files and program were checked using Linux commands, and the contents of the C source file were verified after completing the lab activities.

## Files Included

| File                   | Description                                       |
| ---------------------- | ------------------------------------------------- |
| `Linux_Lab_Report.pdf` | Complete laboratory report and documentation      |
| `README.md`            | Lab overview and documentation                    |
| `greeting.txt`         | Text file created during the file operations task |
| `hello.c`              | C source code                                     |
| `hello_program`        | Compiled C executable                             |

## Tools Used

* Ubuntu Linux
* Bash Command Line
* GCC Compiler
* APT Package Manager
* GNU Nano
* C Programming Language

## Conclusion

This lab provided hands-on experience with essential Linux file operations, APT package management, and basic C programming. It also demonstrated the process of creating, compiling, executing, modifying, and verifying a C program in a Linux environment.

