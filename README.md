# *libft*

## Description
This is a fundamental project that challenges students to create their own C library, containing re-implemented functions from the standard C library as well as additional utility functions.

## Features
- **Standard C Library Functions**: Re-implements essential functions such as `strlen`, `strcpy`, `isdigit`, etc.
- **Memory Management Functions**: Includes memory allocation functions like `malloc`, `free`, and string manipulation functions like `strdup`.
- **Linked List Functions**: Implements a variety of linked list functions for efficient data manipulation.
- **Additional Utility Functions**: Provides additional utility functions to assist in everyday C programming tasks.

## Getting Started
### Installation
1. Clone the repository:

    ```bash
    git clone https://github.com/marzianegro/42-libft.git
    ```

2. Navigate to the project directory:

    ```bash
    cd 42-libft
    ```

3. Compile the library:

    ```bash
    make
    ```

### Usage
1. Include the `libft.h` header file in your C project:

    ```c
    #include "libft.h"
    ```

2. Link your project with the compiled `libft.a` library during compilation:

    ```bash
    gcc -o your_program your_program.c -L. -lft
    ```

### Example
```c
#include "libft.h"

int main()
{
    char *str = "Hello, libft!";
    ft_putstr(str);
    return (0);
}
```
