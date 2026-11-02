*This project has been created as part of the 42 curriculum by yabuzaid.*

# Libft

## Description

Libft is a custom C library developed as part of the 42 curriculum.

The goal of this project is to recreate commonly used functions from the C standard library, while also implementing additional utility functions and linked-list operations.

Implementing these functions from scratch helps develop a strong understanding of C programming, memory management, pointers, strings, file descriptors, function pointers, structures, linked lists, Makefiles, static libraries, and compilation.

The final result is a reusable static library called `libft.a` that can be used in future C projects.

## Library Overview

The library is divided into three main parts:

- **Libc functions** — reimplementations of selected functions from the C standard library.
- **Additional functions** — string, memory, conversion, and file-descriptor utilities.
- **Linked-list functions** — functions for creating and manipulating singly linked lists.

All functions follow the 42 coding standards.

## Functions

### 1. Libc Functions

#### Character Classification

| Function | Description |
|---|---|
| `ft_isalpha` | Checks whether a character is alphabetic. |
| `ft_isdigit` | Checks whether a character is a decimal digit. |
| `ft_isalnum` | Checks whether a character is alphanumeric. |
| `ft_isascii` | Checks whether a character belongs to the ASCII character set. |
| `ft_isprint` | Checks whether a character is printable. |

#### String Functions

| Function | Description |
|---|---|
| `ft_strlen` | Calculates the length of a string. |
| `ft_strchr` | Finds the first occurrence of a character in a string. |
| `ft_strrchr` | Finds the last occurrence of a character in a string. |
| `ft_strncmp` | Compares two strings up to a specified number of characters. |
| `ft_strnstr` | Searches for a substring within a string. |
| `ft_strlcpy` | Copies a string into a destination buffer with size protection. |
| `ft_strlcat` | Appends a string to a destination buffer with size protection. |

#### Memory Functions

| Function | Description |
|---|---|
| `ft_memset` | Fills a block of memory with a specified byte. |
| `ft_bzero` | Sets a block of memory to zero. |
| `ft_memcpy` | Copies a block of memory. |
| `ft_memmove` | Copies memory while handling overlapping regions. |
| `ft_memchr` | Searches for a byte within a block of memory. |
| `ft_memcmp` | Compares two blocks of memory. |

#### Character Conversion

| Function | Description |
|---|---|
| `ft_toupper` | Converts a lowercase character to uppercase. |
| `ft_tolower` | Converts an uppercase character to lowercase. |

#### Conversion and Allocation

| Function | Description |
|---|---|
| `ft_atoi` | Converts a string to an integer. |
| `ft_calloc` | Allocates memory and initializes it to zero. |
| `ft_strdup` | Creates a dynamically allocated copy of a string. |

### 2. Additional Functions

These functions extend the functionality of the standard C library.

| Function | Description |
|---|---|
| `ft_substr` | Creates a substring from a string. |
| `ft_strjoin` | Concatenates two strings into a newly allocated string. |
| `ft_strtrim` | Removes specified characters from the beginning and end of a string. |
| `ft_split` | Splits a string into an array of strings using a delimiter. |
| `ft_itoa` | Converts an integer into a dynamically allocated string. |
| `ft_strmapi` | Applies a function to each character and returns a new string. |
| `ft_striteri` | Applies a function to each character of a string in place. |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

### 3. Linked List Functions

The project also includes a singly linked-list implementation:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

Each node contains a generic `void *` content pointer and a pointer to the next node.

| Function | Description |
|---|---|
| `ft_lstnew` | Allocates and initializes a new list node. |
| `ft_lstadd_front` | Adds a node to the beginning of a list. |
| `ft_lstsize` | Counts the number of nodes in a list. |
| `ft_lstlast` | Returns the last node in a list. |
| `ft_lstadd_back` | Adds a node to the end of a list. |
| `ft_lstdelone` | Deletes one node and its content. |
| `ft_lstclear` | Deletes an entire list and frees its contents. |
| `ft_lstiter` | Applies a function to every node's content. |
| `ft_lstmap` | Creates a new list by applying a function to every node's content. |

---

## Instructions

### Compilation

The project uses a `Makefile` to compile the source files into the static library `libft.a`.

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

**Recompile the library from scratch:**

```bash
make re
```

The Makefile uses the following compiler flags:

```text
-Wall -Wextra -Werror
```

The library is created using `ar`.

### Usage

Include the library header in your C project:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
cc main.c libft.a -o program
```

Example:

```c
#include "libft.h"

int main(void)
{
    ft_putstr_fd("Hello from Libft!\n", 1);
    return (0);
}
```

Run the program:

```bash
./program
```
---

## Resources

- [GeeksforGeeks](https://www.geeksforgeeks.org/) — C programming concepts, pointers, memory management, and linked lists.
- [W3Schools](https://www.w3schools.com/c/) — C syntax, strings, arrays, and pointers.
- [Linux man-pages](https://man7.org/linux/man-pages/) — Used as a reference for function documentation and behavior.

These resources helped support learning about C programming, compilation, and build tools.

## AI Usage

AI was used as a learning and support tool during the project. It helped clarify C programming concepts, explain functions and edge cases, troubleshoot implementation issues, and organize the README documentation.

The project code was written and tested by me.

---

## Author

**Yasmeen Abuzaid**

42 Amman — `yabuzaid`