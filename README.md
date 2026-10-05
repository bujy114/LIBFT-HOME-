*This activity has been created as part of the 42 curriculum by lsallam.*


# Libft

## Description

**Libft** is my first C library, built from scratch as part of the 42 curriculum. The goal is to understand how the standard C functions work by reimplementing them, and to build a personal toolbox of general-purpose functions that will be reused in future projects.

The library compiles into a static archive, `libft.a`, and is split into three parts:

### Part 1 — Libc functions
Reimplementations of standard functions, with the same prototypes and behavior as the originals, prefixed with `ft_`.

| Category | Functions |
|---|---|
| Character checks | `isalpha` `isdigit` `isalnum` `isascii` `isprint` |
| Character conversion | `toupper` `tolower` |
| Strings | `strlen` `strlcpy` `strlcat` `strchr` `strrchr` `strncmp` `strnstr` `strdup` |
| Memory | `memset` `bzero` `memcpy` `memmove` `memchr` `memcmp` `calloc` |
| Conversion | `atoi` |

### Part 2 — Additional functions
Functions that are not in libc, or that exist in a different form.

| Function | Description |
|---|---|
| `ft_substr` | Extracts a substring from a string |
| `ft_strjoin` | Concatenates two strings into a new one |
| `ft_strtrim` | Trims a set of characters from both ends of a string |
| `ft_split` | Splits a string into a NULL-terminated array using a delimiter |
| `ft_itoa` | Converts an integer to a string (handles negatives) |
| `ft_strmapi` | Applies a function to each character and returns a new string |
| `ft_striteri` | Applies a function to each character of a string in place |
| `ft_putchar_fd` `ft_putstr_fd` `ft_putendl_fd` `ft_putnbr_fd` | Output a char, string, string + newline, or integer to a file descriptor |

### Part 3 — Linked list
Functions to manipulate singly linked lists built on the `t_list` structure:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

`ft_lstnew` `ft_lstadd_front` `ft_lstadd_back` `ft_lstsize` `ft_lstlast` `ft_lstdelone` `ft_lstclear` `ft_lstiter` `ft_lstmap`

### Technical choices
- No global variables; helper functions are `static`.
- Written in accordance with the 42 Norm and compiled with `cc -Wall -Wextra -Werror`.
- All heap allocations are checked and freed properly (no leaks).
- The archive is created with `ar` (not `libtool`).

## Instructions

**Build the library:**

```bash
make        # builds libft.a at the root of the repository
make clean  # removes object files
make fclean # removes object files and libft.a
make re     # rebuilds everything from scratch
```

**Use it in your own project:**

```c
#include "libft.h"
```

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

## Resources

**References**
- `man` pages of the reimplemented functions (`man 3 strlen`, `man 3 memmove`, etc.)
- [The C Programming Language](https://en.wikipedia.org/wiki/The_C_Programming_Language) — Kernighan & Ritchie
- [GNU Make documentation](https://www.gnu.org/software/make/manual/)
- [42 Norm](https://github.com/42School/norminette)

**Use of AI**
AI was used as a learning and debugging tool during the project. It was used to:

Explain C concepts such as pointers, memory management, casts, and size_t.
Clarify compiler and Makefile errors.
Review implementations for logical errors and edge cases.
Help understand standard library behavior.

The code was implemented and reviewed with the goal of understanding each function and its behavior rather than blindly copying solutions.
