*This project has been created as part of the 42 curriculum by akarimi.*

# Libft - My Very First Own Library

## Description
This is my first project as a student at the 42 Network (1337). The core goal of Libft is to understand the inner workings of standard C library functions by rewriting them from scratch. Since we are strictly forbidden from using standard libraries (like `<string.h>`) in our upcoming projects, this static library (`libft.a`) will serve as the foundational toolkit I will use for the rest of the curriculum. 

It was a deep dive into memory management, pointer arithmetic, and handling edge cases like memory allocation failures without causing segmentation faults or memory leaks.

### The Library Arsenal
The project is divided into three main sections:

1. **Libc Functions:** Replicating standard C behaviors. 
   * Memory manipulation: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`.
   * String manipulation: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`.
   * Character checks/conversion: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`, `ft_atoi`.
2. **Additional Functions:** Utility functions that are incredibly useful for parsing and string management, such as `ft_split` (allocating an array of strings split by a delimiter), `ft_itoa`, `ft_strjoin`, `ft_substr`, `ft_strtrim`, and mapping/iterating functions like `ft_strmapi` and `ft_striteri`.
3. **Linked Lists:** A complete data structure implementation using a custom `t_list` struct. It includes functions to create nodes (`ft_lstnew`), add them (`ft_lstadd_front`, `ft_lstadd_back`), clear them safely (`ft_lstclear`), and map them to a new list (`ft_lstmap`).

## Instructions

**Compilation:**
To compile the library, you just need to run the `Makefile`. 
* Run `make` to compile all library functions into `libft.a`.
* Run `make clean` to remove the `.o` files, and `make fclean` to remove both the object files and the `libft.a` binary.
* Run `make re` to recompile the entire library from scratch.

**Usage in your projects:**
1. Clone this repository into your project folder.
2. Compile it using `make`.
3. Include the header in your C files: `#include "libft.h"`
4. Compile your program with the library: `cc my_program.c -L. -lft`

## Resources & AI Usage

**Resources:**
To ensure my implementations were historically and technically accurate, I avoided random internet tutorials and relied exclusively on official documentation and standards. For example, understanding why functions like `memchr` take an `int` instead of a `char` (to prevent sign extension bugs and maintain K&R backward compatibility) was sourced directly from the official standards.
* The ISO/IEC 9899 C Standard: [Open-std N1570 (C11 Draft)](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf)
* The official Linux `man` pages for libc.

**How AI was used in this project:**
In accordance with the 42 AI guidelines, I did not use AI to write or generate my code. Instead, I used it strictly as a learning tool and a "virtual corrector". Specifically, I used AI to:
* Discuss and understand complex historical C concepts (like the transition from K&R C to ANSI C).
* Act as a strict code reviewer to help me track down complex memory leaks in `ft_split` and `ft_lstmap`.
* Test my logic against extreme defense edge cases, such as simulating `malloc` failures and ensuring my `NULL` pointer protections were flawless before peer evaluations. 
It helped point out *where* my logic was failing (like phantom nodes and double-frees) so I could figure out *how* to fix the code myself.