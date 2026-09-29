# LAB 03: Investigating Process Lifecycles and OS Interaction

## Introduction

This lab focuses on understanding how C programs interact with the Linux operating system. The practical work demonstrates process execution, process identification, exit codes, standard input/output, and conditional process control.

## Objectives

* Understand basic process management in Linux.
* Create and monitor a long-running process.
* Identify a process using PID and PPID.
* Understand program exit codes and OS feedback.
* Work with standard input and output.
* Implement conditional execution and process termination.

## Lab Tasks

| Task  | Description                                                   | Source File        |
| ----- | ------------------------------------------------------------- | ------------------ |
| **1** | Long-running process using `sleep()` and background execution | `task1_alive.c`    |
| **2** | Process identity using `getpid()` and `getppid()`             | `task2_identity.c` |
| **3** | Exit codes and status verification using `echo $?`            | `task3_exit.c`     |
| **4** | Standard I/O using `scanf()` and `printf()`                   | `task4_input.c`    |
| **5** | Conditional execution and process termination                 | `task5_control.c`  |

## Process Verification

Processes were compiled and executed using GCC. Linux commands were used to monitor and verify process behavior.

```bash
gcc task1_alive.c -o task1
./task1 &
ps aux | grep task1
```

Program exit status was checked using:

```bash
./task3
echo $?
```

## Key Concepts

* **PID:** Identifies a running process.
* **PPID:** Identifies the parent process.
* **Exit Code:** Reports the program's termination status to the operating system.
* **stdin/stdout:** Standard input and output streams used for program interaction.
* **Process Control:** Managing program execution based on conditions and user input.

## Tools Used

* Ubuntu Linux
* GCC Compiler
* Bash Shell
* C Programming Language

## Conclusion

This lab provided practical experience with Linux process management and demonstrated how C programs interact with the operating system through process identification, execution control, standard I/O, and exit status.

