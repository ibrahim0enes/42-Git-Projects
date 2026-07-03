<h1 align="center">42 İstanbul — C Piscine</h1>
<p align="center">A collection of exercises from the C Piscine at <a href="https://www.42istanbul.com.tr/">42 İstanbul</a>, focused on low-level C fundamentals, memory management, and algorithmic thinking.</p>

<p align="center">
  <img src="https://img.shields.io/badge/language-C-00599C?style=flat-square&logo=c&logoColor=white" alt="C" />
  <img src="https://img.shields.io/badge/school-42%20%C4%B0stanbul-000000?style=flat-square" alt="42 İstanbul" />
  <img src="https://img.shields.io/badge/norm-42%20Norm-informational?style=flat-square" alt="42 Norm" />
  <img src="https://img.shields.io/badge/license-MIT-green?style=flat-square" alt="MIT License" />
</p>

---

## About

This repository is a portfolio of exercises completed during the **C Piscine** at 42 İstanbul — an intensive, project-based introduction to the C programming language with no external resources allowed beyond the standard library and, in most cases, only `write()`. Every function here is implemented from first principles: no `libc` string/array helpers unless explicitly reimplemented.

The exercises are grouped by theme rather than by exam number, to make the underlying concepts easier to navigate:

```
42-c-piscine/
├── 01_argv_manipulation/     → reading & transforming command-line arguments
├── 02_recursion_and_math/    → iteration vs. recursion, classic algorithms
└── 03_arrays_and_strings/    → dynamic memory, heap-allocated data structures
```

## Table of Contents

### [01 — Argument Vector Manipulation](./01_argv_manipulation)
| Exercise | Description |
|---|---|
| `ft_print_program_name` | Prints the program's own name. |
| `ft_print_params` | Prints each argument on its own line. |
| `ft_rev_params` | Prints arguments in reverse order. |
| `ft_sort_params` | Sorts and prints arguments alphabetically. |

### [02 — Recursion & Mathematical Functions](./02_recursion_and_math)
| Exercise | Description |
|---|---|
| `ft_iterative_power` | Integer exponentiation, loop-based. |
| `ft_recursive_power` | Integer exponentiation, recursive. |
| `ft_iterative_factorial` | Factorial, loop-based. |
| `ft_recursive_factorial` | Factorial, recursive. |
| `ft_fibonacci` | Recursive Fibonacci sequence. |
| `ft_sqrt` | Integer square root of perfect squares. |
| `ft_is_prime` | Primality test. |
| `ft_find_next_prime` | Next prime number `>= n`. |

### [03 — Arrays, Strings & Dynamic Memory](./03_arrays_and_strings)
| Exercise | Description |
|---|---|
| `ft_ultimate_range` | Fills a pointer with a `[min, max)` int array. |
| `ft_range` | Returns a newly allocated `[min, max)` int array. |
| `ft_strjoin` | Joins a string array with a separator. |
| `ft_convert_base` | Converts a number string between arbitrary bases. |
| `ft_strdup` | Minimal `strdup` reimplementation. |

Each exercise folder contains its own `README.md` (prototype, description, parameters, return value) and a `Makefile` for quick compilation checks.

## Compiling

Every exercise compiles independently against the 42 Norm-aligned flags:

```bash
cd 02_recursion_and_math/ft_fibonacci
make
```

Or compile any single file manually:

```bash
gcc -Wall -Wextra -Werror -c ft_fibonacci.c
```

All files in this repository compile cleanly with `-Wall -Wextra -Werror` and no warnings.

## Conventions

- Code follows the **42 Norm**: tabs for indentation, one declaration per line, no more than 25 lines per function, no assignments in conditions, no `for` loops (only `while`), and a strict header format.
- Functions that allocate memory (`malloc`) always check the return value and fail gracefully.
- Edge cases (negative input, zero-length ranges, invalid bases) are handled explicitly rather than left as undefined behavior.

## About 42

[42](https://42.fr/en/homepage/) is a tuition-free, project-based computer science school with no teachers and no traditional courses — students learn through peer-to-peer collaboration and progressively harder projects. The **Piscine** ("swimming pool" in French) is the intensive selection month new students go through before joining the core curriculum.

## Author

**İbrahim Enes Çolak**
Student @ 42 İstanbul · UE5 Gameplay & AI Developer
[Portfolio](https://ibrahimenescolak.com) · [GitHub](https://github.com/ibrahim0enes)

## License

This project is licensed under the [MIT License](./LICENSE).
