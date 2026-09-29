# LAB 04: Data Types and OS Memory Management

## Introduction

This lab focuses on understanding data types, pointers, dynamic memory allocation, and process memory organization in C. Three programs were developed and executed using Ubuntu and GCC.

## Objectives

1. Determine the size of common C data types using `sizeof()`.
2. Understand pointers and memory addresses.
3. Demonstrate dynamic memory allocation using `malloc()`.
4. Understand the basic organization of process memory.

## Programs

### 1. `datatype_size.c`

Displays the size of common C data types using `sizeof()`.

### 2. `pointer_memory.c`

Demonstrates pointers, memory addresses, and dynamic memory allocation using `malloc()` and `free()`.

### 3. `memory_segments.c`

Displays addresses of global, static, local, heap, and function data to demonstrate process memory organization.

## Memory Segments

* **Text:** Stores program instructions.
* **Data:** Stores initialized global and static variables.
* **BSS:** Stores uninitialized global and static variables.
* **Heap:** Stores dynamically allocated memory.
* **Stack:** Stores local variables and function-related data.

## Commands Used

```bash
gcc datatype_size.c -o datatype_size
./datatype_size

gcc -Wall -Wextra pointer_memory.c -o pointer_memory
./pointer_memory

gcc -Wall -Wextra memory_segments.c -o memory_segments
./memory_segments
```

## Results

* Common data type sizes were successfully displayed.
* Pointer addresses and dynamically allocated memory were successfully demonstrated.
* Different process memory areas were observed through variable and function addresses.
* Memory addresses may change between executions due to ASLR.

## Environment

* Ubuntu Linux (WSL)
* C Programming Language
* GCC Compiler
* GNU Nano
* 64-bit system

## Files

```text
LAB 04/
├── README.md
├── datatype_size.c
├── pointer_memory.c
├── memory_segments.c
└── Data Types and OS Memory Management.docx
```

## Conclusion

The laboratory provided practical understanding of data types, pointers, dynamic memory allocation, and process memory organization in C.

