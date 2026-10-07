# LAB 4.2 – GDB Debugging and Memory Inspection

## Introduction

This lab demonstrates the use of the **GNU Debugger (GDB)** to inspect a C program during execution. The program contains variables stored in different memory regions, including the BSS, stack, and heap.

GDB is used to set breakpoints, inspect variable addresses and values, examine process memory mappings, and observe how the program is loaded into memory.

## Objectives

* Compile a C program with debugging information.
* Use GDB to debug the program during execution.
* Set and use breakpoints.
* Inspect addresses of global, stack, and heap variables.
* Examine process memory mappings using GDB.
* Inspect memory contents using the `x` command.
* Analyze ELF program headers using `readelf`.

## Files

```text
LAB 4.2/
├── demo.c
├── demo
└── README.md
```

* **demo.c** – C source program used for debugging and memory inspection.
* **demo** – Compiled executable with debugging information.
* **README.md** – Documentation for the lab.

## Compilation

The program was compiled with debugging information using:

```bash
gcc -g demo.c -o demo
```

The `-g` option adds debugging information to the executable, allowing GDB to display source code, variables, and line numbers during debugging.

## GDB Debugging

The executable was opened in GDB using:

```bash
gdb ./demo
```

A breakpoint was placed at line 23:

```gdb
break 23
```

The program was then started with:

```gdb
run
```

The breakpoint stopped execution before printing the heap address, allowing the program's memory information to be inspected.

## Memory Address Inspection

The program displayed addresses for variables located in different memory regions:

```text
BSS (Global): 0x555555558014
Stack (Local): 0x7fffffffdd0c
```

The global variable was verified using:

```gdb
print &bss_global_var
```

The result showed that the global variable was located at:

```text
0x555555558014
```

The stack variable was inspected using:

```gdb
print stack_local_var
print &stack_local_var
```

The value and address were:

```text
stack_local_var = 42
Address = 0x7fffffffdd0c
```

## Inspecting Stack Memory

The stack memory was examined using:

```gdb
x/4wx $sp
```

The output showed the value `42` in the stack memory, confirming the location of the local variable in the stack region.

## Inspecting Heap Memory

The dynamically allocated variable was inspected using:

```gdb
print heap_ptr
```

The heap address was:

```text
0x555555559010
```

The value stored at that address was examined using:

```gdb
x/1wd heap_ptr
```

The result was:

```text
0x555555559010: 99
```

This confirms that the dynamically allocated value `99` was stored in the heap.

## Process Memory Mapping

The command:

```gdb
info proc mappings
```

was used to display the memory regions allocated to the running process.

The important regions included:

| Memory Region    | Example Address Range             | Purpose                            |
| ---------------- | --------------------------------- | ---------------------------------- |
| Program          | `0x55555555...`                   | Program code and data              |
| Heap             | `0x555555559000 – 0x55555557a000` | Dynamic memory allocation          |
| Stack            | `0x7ffffffde000 – 0x7ffffffff000` | Local variables and function calls |
| Shared Libraries | `0x7ffff7...`                     | Libraries such as `libc`           |

The memory mappings demonstrate that different parts of a running process are placed in separate virtual memory regions.

## ELF Program Header Inspection

The executable was also analyzed using:

```bash
readelf -l demo
```

The command displayed the ELF program headers and loadable segments.

The important segments included:

* **R** – Read permission
* **R E** – Read and Execute permission
* **RW** – Read and Write permission

The output also showed that the `.text` section belongs to an executable segment, while `.data` and `.bss` are contained in a writable segment.

The GNU stack information was also displayed by the ELF program headers.

## Result

The lab successfully demonstrated how GDB can be used to inspect a running C program at the memory level. The experiment confirmed the presence of different memory regions, including:

* **BSS** for uninitialized global data
* **Stack** for local variables
* **Heap** for dynamically allocated memory
* **Text/code** region for executable instructions
* **Shared libraries** loaded into the process address space

The use of `readelf` further showed how the executable is organized into ELF program segments.

## Conclusion

This lab provided practical experience with GDB and Linux process memory. By using breakpoints, variable inspection, memory examination, and process mappings, the locations and contents of different types of memory could be observed directly.

The experiment also demonstrated the relationship between the C program, its compiled ELF executable, and the virtual memory layout of a running process.
