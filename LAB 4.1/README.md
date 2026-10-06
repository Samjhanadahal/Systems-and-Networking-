# LAB 4.1 – Auditing of Text and Initialized Data Segments via Hardware Disassembly

## Introduction

This laboratory investigates the organization of compiled programs in memory by examining the **Text (`.text`)**, **Read-Only Data (`.rodata`)**, and **Initialized Data (`.data`)** segments.

A C program was compiled with debugging information and inspected using the **GNU Debugger (GDB)**. The debugger was used to identify the runtime addresses of a function, a string literal, and an initialized global variable. The `info files` command was also used to examine the memory boundaries assigned to different sections of the executable.

The laboratory additionally examines the raw hexadecimal representation of an initialized variable to determine the byte-ordering convention used by the system.

## Objectives

The main objectives of this laboratory are:

1. To examine the memory organization of the `.text`, `.rodata`, and `.data` sections.
2. To identify the runtime addresses of program instructions, read-only strings, and initialized global data.
3. To use GDB to inspect executable section boundaries.
4. To examine the raw hexadecimal value stored in memory.
5. To determine whether the system uses Little-Endian or Big-Endian byte ordering.
6. To understand how compiled program instructions and data are separated in memory.

## System Environment

* Operating System: Ubuntu Linux
* Architecture: x86_64
* Compiler: GCC
* Debugger: GNU GDB
* Source File: `demo2.c`
* Executable: `demo2`

## Source Program

The program contains:

* An initialized global variable:
  `data_global_var = 0x12345678`
* A string literal:
  `" Text_Segment_Verification"`
* A function:
  `check_execution()`

These elements are used to demonstrate the separation between the Text, Read-Only Data, and Initialized Data sections.

## Commands Used

### 1. Create the source file

```bash
nano demo2.c
```

The `nano` command opens the Nano text editor, which is used to create or modify the C source file.

### 2. Display the source code

```bash
cat demo2.c
```

The `cat` command displays the contents of `demo2.c` directly in the terminal.

### 3. Compile with debugging information

```bash
gcc -g demo2.c -o demo2
```

This command compiles the C program using GCC.

* `gcc` – GNU C Compiler
* `-g` – includes debugging information required by GDB
* `-o demo2` – creates an executable named `demo2`

### 4. Run the program normally

```bash
./demo2
```

This executes the compiled program and displays the runtime addresses of the global variable, string literal, and function.

### 5. Start GDB

```bash
gdb ./demo2
```

This starts the GNU Debugger and loads the `demo2` executable with its debugging symbols.

### 6. Set a breakpoint

```gdb
break 22
```

The `break` command creates a breakpoint at the specified source-code line. Program execution pauses when that line is reached.

### 7. Run the program inside GDB

```gdb
run
```

The `run` command starts program execution under GDB. Execution stops when a breakpoint is reached.

### 8. Display source code

```gdb
list
```

The `list` command displays source-code lines around the current location.

### 9. Display the executable section layout

```gdb
info files
```

This command displays information about the executable file and its linked sections, including `.text`, `.rodata`, `.data`, and `.bss`.

### 10. Print the address of the global variable

```gdb
print &data_global_var
```

This displays the memory address where the initialized global variable is stored.

### 11. Examine the raw hexadecimal value

```gdb
x/wx &data_global_var
```

The `x` command examines memory.

* `w` – examine one word
* `x` – display the value in hexadecimal

This command was used to verify that the global variable contains:

```text
0x12345678
```

### 12. Print the string pointer

```gdb
print text_string_literal
```

This displays the address of the string literal and its text content.

### 13. Examine the string in memory

```gdb
x/s text_string_literal
```

The `x/s` command examines memory and displays the contents as a string.

### 14. Print the address of the string pointer variable

```gdb
print &text_string_literal
```

This displays the memory address of the pointer variable itself.

### 15. Continue execution

```gdb
continue
```

The `continue` command resumes execution after a breakpoint.

### 16. Exit GDB

```gdb
quit
```

The `quit` command terminates the GDB debugging session.

## Observed Results

### Runtime Addresses

| Item                          | Runtime Address  |
| ----------------------------- | ---------------- |
| Initialized Global Data       | `0x555555558010` |
| ROData String                 | `0x555555556008` |
| Text Code (`check_execution`) | `0x555555555169` |

### Executable Section Boundaries

| Section   | Start Address    | End Address      |
| --------- | ---------------- | ---------------- |
| `.text`   | `0x555555555080` | `0x55555555520f` |
| `.rodata` | `0x555555556000` | `0x5555555560e8` |
| `.data`   | `0x555555558000` | `0x555555558020` |
| `.bss`    | `0x555555558020` | `0x555555558028` |

The runtime address of `check_execution()` falls within the `.text` section. The string literal address falls within `.rodata`, and the initialized global variable address falls within `.data`.

## Memory Examination Result

The initialized global variable was defined as:

```c
int data_global_var = 0x12345678;
```

GDB was used to examine its memory contents:

```gdb
x/wx &data_global_var
```

The result was:

```text
0x555555558010 <data_global_var>: 0x12345678
```

The string literal was also successfully located:

```text
0x555555556008: " Text_Segment_Verification"
```

## Endianness Result

The system uses **Little-Endian** byte ordering.

The program was executed on an x86_64 Linux system. The hexadecimal value stored in the global variable was verified using GDB as:

```text
0x12345678
```

In Little-Endian memory representation, the least significant byte is stored at the lowest memory address. Therefore, the bytes of `0x12345678` are arranged in memory as:

```text
78 56 34 12
```

This confirms the Little-Endian byte-order convention used by the system.

## Conclusion

This laboratory successfully demonstrated the separation of program instructions and data within a compiled executable. Using GCC and GDB, the `.text`, `.rodata`, `.data`, and `.bss` sections were identified and their memory boundaries were examined.

The runtime addresses confirmed that the function was located inside `.text`, the string literal was located inside `.rodata`, and the initialized global variable was located inside `.data`.

The memory examination also verified the stored hexadecimal value `0x12345678`. The system was identified as an x86_64 Linux environment using Little-Endian byte ordering.
