# C Programming and OS Interaction

Lab exploring how C programs interact with the OS — processes, PID/PPID, exit codes, I/O streams, and control flow — using the Linux shell.

## Tasks

| Task | Description | Source |
|------|-------------|--------|
| 1 | Long-Running Process — loop with `sleep()`, run in background & foreground | `task1_slow.c` |
| 2 | Process Identity — get/print PID and PPID via `getpid()`/`getppid()` | `task2_identity.c` |
| 3 | Exit Codes and OS Feedback — return success/failure codes, check via `$?` | `task3_exit.c` |
| 4 | Standard I/O Streams — `scanf`/`printf` for stdin/stdout | `task4_input.c` |
| 5 | Conditional Execution and Control Flow | `task5_control.c` |

## Build & Run

```bash
gcc taskN_name.c -o taskN
./taskN
```

Run in background:
```bash
./task1 &
ps aux | grep task1
```

Check exit code:
```bash
./task3
echo $?
```

## Requirements
- Linux shell (Ubuntu/Debian recommended)
- GCC compiler

## Repo Structure
