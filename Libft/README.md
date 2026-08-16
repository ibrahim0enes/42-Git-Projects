*This project has been created as part of the 42 curriculum by ibcolak.*

# Libft

## Description

libft is a static C library (`libft.a`) that reimplements commonly used functions
from the C standard library (libc) — prefixed with `ft_` — and adds extra functions
for string/memory manipulation, writing to file descriptors, and singly linked list
(`t_list`) operations. It serves as a foundational building block used across almost
every subsequent project in the 42 curriculum.

## Detailed Library Description

The library provides a wide array of functions, all defined within the `libft.h`
header file. The implementations are categorized as follows:

* **Character Classification:** `ft_isalnum.c`, `ft_isalpha.c`, `ft_isascii.c`,
  `ft_isdigit.c`, `ft_isprint.c`
* **Memory Management:** `ft_bzero.c`, `ft_calloc.c`, `ft_memchr.c`, `ft_memcmp.c`,
  `ft_memcpy.c`, `ft_memmove.c`, `ft_memset.c`
* **String Manipulation:** `ft_split.c`, `ft_strchr.c`, `ft_strdup.c`,
  `ft_striteri.c`, `ft_strjoin.c`, `ft_strlcat.c`, `ft_strlcpy.c`, `ft_strlen.c`,
  `ft_strmapi.c`, `ft_strncmp.c`, `ft_strnstr.c`, `ft_strrchr.c`, `ft_strtrim.c`,
  `ft_substr.c`
* **Linked List Operations:** `ft_lstadd_back.c`, `ft_lstadd_front.c`,
  `ft_lstclear.c`, `ft_lstdelone.c`, `ft_lstiter.c`, `ft_lstlast.c`, `ft_lstmap.c`,
  `ft_lstnew.c`, `ft_lstsize.c`
* **Conversions & File Descriptor I/O:** `ft_atoi.c`, `ft_itoa.c`, `ft_tolower.c`,
  `ft_toupper.c`, `ft_putchar_fd.c`, `ft_putendl_fd.c`, `ft_putnbr_fd.c`,
  `ft_putstr_fd.c`

## Instructions

To compile and use the library, you will use the provided `Makefile`.

1. **Compilation:** Run `make` in the root directory. This will compile all the
   `.c` files into a static library named `libft.a`.
2. **Clean:** Run `make clean` to remove object files generated during compilation.
3. **Full Clean:** Run `make fclean` to remove both the object files and the
   compiled `libft.a` library.
4. **Recompile:** Run `make re` to completely clean and recompile the library from
   scratch.
5. **Integration:** To use this library in your own projects, `#include "libft.h"`
   in your C files and compile your project with the generated `libft.a` static
   library.

## Resources

*   **Documentation:** Standard man pages (`man 3 strlen`, `man 3 memcpy`, `man 3 calloc`, etc.), [cppreference - C](https://en.cppreference.com/w/c), and [w3schools - C](https://www.w3schools.com/c/).
*   **Linked Lists:** [Singly Linked List Tutorial - GeeksforGeeks](https://www.geeksforgeeks.org/dsa/singly-linked-list-tutorial/) and [Linked List - Medium](https://medium.com/@mcancankaya/linked-list-bd4e3bba0f8).
*   **Memory Functions:** [Difference between malloc and calloc - GeeksforGeeks](https://www.geeksforgeeks.org/c/difference-between-malloc-and-calloc-with-examples/).
*   **Makefile:** [What is a Makefile and how to use it](https://alperenonal.com/blog/makefile-nedir-nasil-kullanilir) and [Opensource.com](https://opensource.com/article/18/8/what-how-makefile).
*   **42 Norm:** norminette documentation.

**AI usage:** Used to find bugs I couldn't spot on my own, format the code to follow 42 Norm rules, review the code, and clarify questions about the project.