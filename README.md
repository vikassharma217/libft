libft

Welcome to libft, a custom implementation of essential C standard library functions. This project is a foundational library developed as part of the 42 curriculum, aimed at deepening understanding of C programming by recreating functions commonly used in the C Standard Library. By prefixing the recreated functions with ft_, we distinguish them from the originals, providing a personal touch and showcasing the effort involved in building them from scratch.

Overview

The libft project focuses on implementing key functions like memcpy, strcmp, calloc, and others, as well as extending the library to include additional utility functions that are often useful in C programming. This library demonstrates core concepts such as memory management, string manipulation, and data processing.

Features

Reimplementation of standard C library functions:

Memory management: ft_memcpy, ft_memset, ft_memmove, ft_calloc, etc.

String manipulation: ft_strlen, ft_strcmp, ft_strdup, ft_strchr, etc.

Character classification: ft_isalpha, ft_isdigit, ft_isalnum, ft_tolower, etc.

Custom utility functions:

ft_itoa: Convert integers to strings.

ft_split: Split strings into arrays based on a delimiter.

ft_strjoin: Concatenate two strings into one.

Many more!

Why Libft?

Libft is designed to:

Strengthen your understanding of C by diving deep into its core functions.

Provide a reusable library for your C projects.

Improve your problem-solving skills by encouraging clean, modular code design.

Installation

To use libft in your projects:

Clone the repository:

git clone https://github.com/yourusername/libft.git
cd libft

Compile the library:

make

Include the library in your project:

Add libft.a to your project.

Include the libft.h header file in your source files.

Usage Example

Here's an example of using libft in a simple C program:

#include "libft.h"
#include <stdio.h>

int main() {
    char *src = "Hello, World!";
    char dest[20];

    ft_memcpy(dest, src, ft_strlen(src) + 1);
    printf("Copied string: %s\n", dest);

    return 0;
}

Directory Structure

src/: Contains the implementation files for each function.

include/: Contains the libft.h header file with all function prototypes.

Makefile: Automates the compilation of the library.

Contributing

Contributions are welcome! Feel free to fork this repository, make improvements, and submit pull requests.

License

This project is open-source and available under the MIT License.

Acknowledgments

This project is part of the 42 School curriculum, and I am grateful for the opportunity to work on it. Special thanks to the 42 community for its support and resources.

