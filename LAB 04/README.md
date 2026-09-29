cat > "LAB 04/README.md" <<'EOF'
# LAB 04: Data Types and OS Memory Management

## Introduction

This laboratory focuses on understanding data types, pointers, and memory management in a C program. The experiments were performed using the C programming language in an Ubuntu Linux environment.

The practical activities demonstrate the memory size of different C data types, the use of pointers and dynamic memory allocation, and the organization of major memory segments of a running process.

These experiments help to understand how C programs use memory and how the operating system manages different areas of process memory.

## Objectives

The main objectives of this laboratory are:

- To determine the memory size of commonly used C data types using the `sizeof()` operator.
- To understand the concept and use of pointers in C.
- To demonstrate dynamic memory allocation using heap memory.
- To understand the major memory segments of a process.
- To observe the Data, BSS, Heap, and Stack segments through a C program.
- To develop a practical understanding of how C programs interact with memory managed by the operating system.

## Experiments

### Experiment 1: Data Type Size

This program demonstrates the memory size occupied by different C data types using the `sizeof()` operator.

**Program:** `datatype_size.c`

### Experiment 2: Pointer and Dynamic Memory

This program demonstrates the use of pointers and dynamic memory allocation and shows how dynamically allocated memory is accessed through pointers.

**Program:** `pointer_memory.c`

### Experiment 3: Process Memory Segments

This program demonstrates the major memory segments of a process, including Data, BSS, Heap, and Stack, and displays their memory addresses.

**Program:** `memory_segments.c`

## Environment

- **Operating System:** Ubuntu Linux
- **Programming Language:** C
- **Compiler:** GCC
- **Architecture:** 64-bit

## Conclusion

This laboratory provides practical knowledge of data types, pointers, dynamic memory allocation, and process memory organization. The experiments demonstrate how different types of data are stored in memory and how different memory regions are used by a running C program.
EOF
