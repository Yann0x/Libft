# 🧩 Libft — 42 Project

A custom implementation of the standard C library, written entirely from scratch as part of the **42 School curriculum**.  
This project aims to strengthen understanding of **pointers**, **memory management**, and **data structures** while building a personal C utility library to be reused in future projects.

---

## 📘 Table of Contents
- [About the Project](#-about-the-project)
- [Features](#-features)
- [Project Structure](#-project-structure)
- [Building the Library](#-building-the-library)
- [Usage](#-usage)
- [Bonus Part](#-bonus-part)
- [Testing](#-testing)
- [Resources](#-resources)
- [License](#-license)

---

## 📖 About the Project

**Libft** is the very first project at **42**, where the goal is to recreate a selection of functions from the C standard library, as well as a few additional utilities that will be useful in future projects (like `get_next_line`, `ft_printf`, and `push_swap`).

This project teaches:
- Writing clean, modular C code.
- Understanding low-level memory operations.
- Implementing linked lists and other basic data structures.
- Creating a reusable static library.

---

## ⚙️ Features

- Reimplementation of standard C library functions:
  - Memory: `memset`, `memcpy`, `memmove`, `calloc`, `bzero`, ...
  - Strings: `strlen`, `strdup`, `strjoin`, `strtrim`, `split`, ...
  - Character checks: `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`, ...
  - Conversions: `atoi`, `itoa`, ...
  - File descriptor I/O: `putchar_fd`, `putstr_fd`, `putendl_fd`, `putnbr_fd`, ...

- Linked list utilities (bonus part):
  - `lstnew`, `lstadd_front`, `lstadd_back`, `lstdelone`, `lstclear`, `lstiter`, `lstmap`

---

## 🧱 Project Structure

```
libft/
├── Makefile
├── includes/
├   └── libft.h
├── srcs/
├   └── ft_*.c
└── bonus/
    └── ft_lst*.c
```

| File | Description |
|------|--------------|
| `libft.h` | Header file with all function prototypes and includes. |
| `Makefile` | Handles compilation and library creation (`make`, `make clean`, etc.). |
| `srcs/` | Implementation of all the mandatory functions. |
| `bonus/` | Contains linked list utility functions. |

---

## 🏗️ Building the Library

To compile the library, simply run:

```bash
make
```

This will generate a static library file called **`libft.a`**.

You can also use:

```bash
make bonus
```

to include the linked list functions.

Clean compiled objects with:

```bash
make clean
```

Rebuild everything from scratch:

```bash
make re
```

---

## 🚀 Usage

You can include **Libft** in your own C project by linking it during compilation:

```bash
gcc main.c -L. -lft -I./includes
```

Or simply include it as a dependency in your Makefile:

```makefile
LIBFT = ./libft/libft.a
```

Then include the header in your code:
```c
#include "libft.h"
```

---

## 🌟 Bonus Part

If you complete the mandatory functions, you can implement **linked list utilities**:

- Creation: `ft_lstnew`
- Addition: `ft_lstadd_front`, `ft_lstadd_back`
- Removal: `ft_lstdelone`, `ft_lstclear`
- Iteration: `ft_lstiter`, `ft_lstmap`

These help manipulate dynamic data structures cleanly and efficiently.

---

## 🧪 Testing

You can test your Libft using popular testers such as:
- [**Tripouille/libftTester**](https://github.com/Tripouille/libftTester)
- [**alelievr/libft-unit-test**](https://github.com/alelievr/libft-unit-test)

Clone one of these repositories inside your Libft folder and run the tests:

```bash
git clone https://github.com/Tripouille/libftTester.git
cd libftTester
make
```

---

## 📚 Resources

- [C Manual – cplusplus.com](https://cplusplus.com/reference/clibrary/)
- [The C Programming Language (K&R Book)](https://en.wikipedia.org/wiki/The_C_Programming_Language)

---

## 🪪 License

This project is licensed under the **MIT License** — feel free to use and modify it for your own learning and projects.

---

> 💬 _"Libft is not just a library — it’s your foundation for everything that follows at 42."_  
> — _42 Network_
