<h1 align="center">42 Istanbul — Piscine &amp; Common Core</h1>
<p align="center"><i>Code, written from first principles.</i></p>
<p align="center">
  A living archive of my work throughout the <a href="https://www.42istanbul.com.tr/">Piscine</a> and the subsequent <b>Common Core</b> at 42 Istanbul.
</p>

<p align="center">
  <img src="https://img.shields.io/badge/language-C-00599C?style=flat-square&logo=c&logoColor=white" alt="C" />
  <img src="https://img.shields.io/badge/language-Shell-4EAA25?style=flat-square&logo=gnubash&logoColor=white" alt="Shell" />
  <img src="https://img.shields.io/badge/language-C++-00599C?style=flat-square&logo=cplusplus&logoColor=white" alt="C++" />
  <img src="https://img.shields.io/badge/language-Python-3776AB?style=flat-square&logo=python&logoColor=white" alt="Python" />
</p>
<p align="center">
  <img src="https://img.shields.io/badge/school-42%20Istanbul-000000?style=flat-square" alt="42 Istanbul" />
  <img src="https://img.shields.io/badge/norm-42%20Norm-informational?style=flat-square" alt="42 Norm" />
  <img src="https://img.shields.io/badge/memory-Valgrind%20Checked-orange?style=flat-square&logo=gnu&logoColor=white" alt="Valgrind Checked" />
  <img src="https://img.shields.io/badge/license-MIT-green?style=flat-square" alt="MIT License" />
</p>

---

## About

This repository brings together my full 42 Istanbul journey: the **Piscine** (an intensive, no-external-resources selection month) and the subsequent **Common Core** (the official curriculum, extending C and Shell with Python, C++, and LLM/AI-focused coursework). Each project is documented in its own folder, with its own `README.md` and `Makefile` — this top-level document is deliberately kept general, so it does not need to be rewritten as new projects are added.

## Skills

Low-level C and manual memory management; Shell/Unix fundamentals; recursion and algorithmic thinking; designing data structures and libraries from scratch; a testing discipline centered on memory safety; and, as the curriculum expands, Python, C++, and LLM/AI-related topics.

## Building

```bash
cd <project-directory>
make
```

To compile a single file manually:

```bash
gcc -Wall -Wextra -Werror -c file.c
```

## Conventions

- Code follows the **42 Norm**: tab indentation, one variable declaration per line, a maximum of 25 lines per function, no assignments within conditions, `while` only (no `for`), and a strict header format.
- Every function is written from first principles; no `libc` helper function is used unless explicitly reimplemented.
- Functions that allocate memory always check their return value; leaks and invalid accesses are checked regularly with **Valgrind**.
- Edge cases (negative or zero-length input, `NULL` pointers) are handled explicitly rather than left as undefined behavior.

## About 42

[42](https://42.fr/en/homepage/) is a tuition-free, project-based computer science school with no teachers and no traditional courses — students learn through peer-to-peer collaboration. The **Piscine** is the intensive selection month new students go through before joining the Common Core.

## Author

**İbrahim Enes Çolak** — Student at 42 Istanbul · UE5 Gameplay &amp; AI Developer
[Portfolio](https://ibrahimenescolak.com) · [GitHub](https://github.com/ibrahim0enes)

## License

[MIT License](./LICENSE)
