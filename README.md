# ft_printf

A custom implementation of the standard C library function `printf`, developed as part of the 42 School curriculum.

## Description

`ft_printf` is a reimplementation of the `printf` function that handles formatted output conversion. This project demonstrates understanding of variadic functions, format specifiers, and low-level output operations in C.

## Features

The `ft_printf` function supports the following format specifiers:

- `%c` - Print a single character
- `%s` - Print a string
- `%d` - Print a decimal (base 10) number
- `%i` - Print an integer in base 10
- `%u` - Print an unsigned decimal (base 10) number  
- `%x` - Print a number in hexadecimal (base 16) lowercase format
- `%X` - Print a number in hexadecimal (base 16) uppercase format
- `%p` - Print a pointer in hexadecimal format
- `%%` - Print a literal percent sign

## Project Structure

```
ft_printf/
├── Makefile
├── ft_printf.c         # Main printf function implementation
├── ft_printf.h         # Header file with function prototypes
├── ft_print_char.c     # Character printing functions
├── ft_print_string.c   # String printing functions
├── ft_print_digit.c    # Integer/decimal printing functions
└── ft_print_hexa.c     # Hexadecimal printing functions
```

## Compilation

To compile the library, run:

```bash
make
```

This will create a static library `libftprintf.a` that you can link with your projects.

## Usage

1. Include the header in your C file:
```c
#include "ft_printf.h"
```

2. Use `ft_printf` just like the standard `printf`:
```c
ft_printf("Hello %s! You have %d new messages.\n", "World", 42);
ft_printf("Hexadecimal: %x, Uppercase: %X\n", 255, 255);
ft_printf("Pointer address: %p\n", &variable);
```

3. Compile your project linking with the library:
```bash
gcc your_file.c -L. -lftprintf
```

## Implementation Details

- Uses variadic functions (`stdarg.h`) to handle variable number of arguments
- Implements custom functions for each format specifier type
- Returns the number of characters printed (similar to standard `printf`)
- Handles edge cases like null pointers and format string validation

## Author

**abdellah rekoune** - [GitHub Profile](https://github.com/rekoune)

## School

This project is part of the 1337med/42 School curriculum.

---

*Note: This implementation focuses on the core functionality of printf and may not include all features of the standard library function.*
