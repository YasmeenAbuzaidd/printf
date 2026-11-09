*This project has been created as part of the 42 curriculum by yabuzaid.*

# ft_printf

## Description

ft_printf is a custom implementation of the standard C `printf()` function, developed as part of the 42 curriculum.

The goal of this project is to recreate the behavior of the original `printf()` function while learning how to use variadic functions in C.

The implementation processes a format string, identifies conversion specifiers, retrieves the corresponding arguments, and prints their values to the standard output.

The function supports the following mandatory conversions:

| Specifier | Description |
|---|---|
| `%c` | Prints a single character. |
| `%s` | Prints a string. |
| `%p` | Prints a pointer address in hexadecimal format. |
| `%d` | Prints a signed decimal integer. |
| `%i` | Prints an integer in base 10. |
| `%u` | Prints an unsigned decimal integer. |
| `%x` | Prints an unsigned integer in lowercase hexadecimal format. |
| `%X` | Prints an unsigned integer in uppercase hexadecimal format. |
| `%%` | Prints a percent sign. |

### Libft

This project uses functions from my Libft library. The Libft source files are included in the `libft/` directory, and the Makefile compiles the library as part of the project.

### Algorithm

The implementation follows a format-parsing approach:

1. **Format Parsing:** The `ft_printf()` function iterates through the format string character by character.
2. **Specifier Detection:** When a `%` character is encountered, the next character is checked to determine the required conversion.
3. **Argument Retrieval:** The appropriate argument is retrieved using `va_arg()` according to the conversion specifier.
4. **Conversion and Output:** The corresponding function processes and prints the argument.
5. **Character Counting:** Each printing operation returns the number of characters written. These values are accumulated and returned by `ft_printf()`.

This approach separates format parsing, argument handling, conversion, and output into smaller functions, making the implementation easier to maintain and understand.

### Data Structures and Technical Choices

The project does not require complex data structures. It mainly uses:

- **`va_list`:** Manages the variable arguments passed to `ft_printf()`.
- **`uintptr_t`:** Represents pointer addresses as an unsigned integer for hexadecimal conversion.

The implementation uses separate conversion functions for unsigned decimal and hexadecimal numbers. Dynamically allocated strings are freed after printing to prevent memory leaks.

## Instructions

### Compilation

The project uses a Makefile to compile the source files and create the static library `libftprintf.a`.

**Compile the library:**

```bash
make
```

**Remove object files:**

```bash
make clean
```

**Remove object files and the library:**

```bash
make fclean
```

**Recompile the project from scratch:**

```bash
make re
```

The project is compiled using:

```text
-Wall -Wextra -Werror
```

The library is created using `ar`.

### Usage

Include the project header:

```c
#include "ft_printf.h"
```

Compile your program with the library:

```bash
cc main.c libftprintf.a -o program
```

Example:

```c
#include "ft_printf.h"

int main(void)
{
    int count;

    count = ft_printf("Hello, %s! Number: %d\n", "42", 42);
    ft_printf("Characters printed: %d\n", count);
    return (0);
}
```

Run the program:

```bash
./program
```

## Resources

The following resources were used to understand the concepts and tools involved in this project:

Variadic functions: https://www.geeksforgeeks.org/c/variadic-functions-in-c/

uintptr_t: https://www.tutorialpedia.org/blog/what-is-the-uintptr-t-data-type/

printf(): [https://man7.org/linux/man-pages/man3/printf.3.com](https://man7.org/linux/man-pages/man3/printf.3.html?utm_source=chatgpt.com)

## AI Usage
AI tools were used to help understand concepts, review code, and troubleshoot errors during development.

---

## Author

**Yasmeen Abuzaid**

42 Amman — `yabuzaid`