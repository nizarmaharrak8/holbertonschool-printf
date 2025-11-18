# _printf

Custom implementation of the C standard library function `printf`.

This project re-creates a simplified version of `printf`, using:
- Variadic functions (`stdarg.h`)
- Low-level output with `write`
- Manual parsing of a format string

It is written in C and compiled on Linux using `gcc`.

---

## Features

The current version of `_printf` supports the following conversion specifiers:

- `%c` : print a single character
- `%s` : print a null-terminated string
- `%%` : print the `%` character

> ✅ No buffering, no flags, no width, no precision, no length modifiers.  
> ✅ Output is written directly to `stdout` using `write(1, ...)`.

You can extend it later to support:
- `%d`, `%i` (signed integers)
- `%u`, `%x`, `%X`, `%p`, etc.

---

## Function Prototype

```c
int _printf(const char *format, ...);