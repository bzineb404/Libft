*This project has been created as part of the 42 curriculum by zbidas.*

# libft

## Description

**libft** is a static C library that reimplements a selection of standard
`libc` functions and adds extra utilities for strings, memory, file output,
and linked lists.

**Goal:** understand how the standard functions work internally, practice
memory management and pointer manipulation in C, and build a reusable library
that can be linked into later 42 projects.

**Overview:** the library is compiled with `cc -Wall -Wextra -Werror` and
packaged with `ar` (no `libtool`) into `libft.a`. The Makefile avoids
unnecessary relinking.

## Instructions

### Compilation

```
make          # build libft.a
make clean    # remove object files
make fclean   # remove object files and libft.a
make re       # rebuild from scratch
```

### Usage in your own project

Include the header in your source files:

```c
#include "libft.h"
```

Then link the archive directly when compiling:

```
cc main.c libft.a -o program
```

## Library description

### Part 1: libc reimplementations

| Function | Description |
|---|---|
| `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` | Character class checks |
| `ft_toupper`, `ft_tolower` | Case conversion |
| `ft_strlen` | Length of a string |
| `ft_strlcpy`, `ft_strlcat` | Size-bounded string copy and concatenation |
| `ft_strchr`, `ft_strrchr` | First / last occurrence of a character in a string |
| `ft_strncmp` | Compare up to n characters of two strings |
| `ft_strnstr` | Find a substring within the first n characters |
| `ft_strdup` | Duplicate a string with `malloc` |
| `ft_atoi` | Convert a string to an integer |
| `ft_memset`, `ft_bzero` | Fill memory with a byte / zeros |
| `ft_memcpy`, `ft_memmove` | Copy memory (non-overlapping / overlap-safe) |
| `ft_memchr`, `ft_memcmp` | Search / compare memory |
| `ft_calloc` | Allocate zero-initialized memory |

### Part 2: additional functions

| Function | Description |
|---|---|
| `ft_substr` | Extract a substring from a string |
| `ft_strjoin` | Concatenate two strings into a new one |
| `ft_strtrim` | Trim given characters from both ends of a string |
| `ft_split` | Split a string into an array of strings using a delimiter |
| `ft_itoa` | Convert an integer to a string |
| `ft_strmapi` | Apply a function to each character, returning a new string |
| `ft_striteri` | Apply a function to each character in place |
| `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` | Write a char / string / line / number to a file descriptor |

### Linked list functions

Based on this structure:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

| Function | Description |
|---|---|
| `ft_lstnew` | Create a new node |
| `ft_lstadd_front`, `ft_lstadd_back` | Add a node at the start / end |
| `ft_lstsize` | Count the nodes |
| `ft_lstlast` | Return the last node |
| `ft_lstdelone` | Free one node using a delete function |
| `ft_lstclear` | Free a whole list |
| `ft_lstiter` | Apply a function to each node's content |
| `ft_lstmap` | Build a new list by applying a function to each node |

## Resources

- `man 3` pages for each reimplemented function (`man 3 strlcpy`, etc.)
- GNU Make manual: https://www.gnu.org/software/make/manual/
- `man ar` for building static libraries
- Makefile Tutorial: https://makefiletutorial.com

### Videos

- https://youtu.be/HmbByRhh3Sk
- https://youtu.be/4IDLCtEPtN8
- https://www.youtube.com/live/GExnnTaBELk
- https://youtu.be/ps_5YNZMagE
- https://youtu.be/MIL2BK02X8A