# Project: Reimplementation of the `printf()` Function

## Introduction
The `printf()` function in C is used to print information to the screen. In this project, our goal is to reimplement the `printf()` function from the standard C library (`libc`). Our version, called `ft_printf()`, should meet a series of specific requirements. This document provides the instructions and technical details to complete this task, explaining the logic behind the conversions, the use of variadic functions, and other important technical information.

## Requirements
1. **No Buffer Management**: We will not implement buffer management like the original `printf()`. Our `ft_printf()` function will print the values directly.
2. **Supported Conversions**: Our function must handle the following conversions:
   - `c` - Character
   - `s` - String
   - `p` - Memory address
   - `d` - Integer (base 10)
   - `i` - Integer
   - `u` - Unsigned integer (base 10)
   - `x` - Integer (base 16, lowercase)
   - `X` - Integer (base 16, uppercase)
   - `%` - Percent character
3. **Comparison with Original `printf()`**: The function will be compared to the original `printf()` to check for compatibility and behavior.
4. **Use of `ar`**: We must use the `ar` command to create our library, avoiding the use of `libtool`.
5. **Library Location**: The `libftprintf.a` library must be created at the root of the repository.

## Conversions
The conversions refer to the characters following the `%` symbol that specify the type of data to be printed. The following table describes the conversions we will implement and the auxiliary functions used for each data type:

| Specifier    | Data Type                       | Function            | Function in libft? |
|--------------|----------------------------------|---------------------|--------------------|
| `c`          | Character                        | `ft_putchar_fd()`   | Yes                |
| `s`          | String                           | `ft_putstr()`       | Yes                |
| `p`          | Memory address                   | `ft_putpoint()`     | No                 |
| `d`          | Integer (base 10)                | `ft_putnbr_fd()`    | Yes                |
| `i`          | Integer                          | `ft_putnbr_fd()`    | Yes                |
| `u`          | Unsigned integer (base 10)       | `ft_putunsignbr()`  | No                 |
| `x`          | Integer (base 16, lowercase)     | `ft_puthex()`       | No                 |
| `X`          | Integer (base 16, uppercase)     | `ft_puthex()`       | No                 |
| `%`          | Percent character                | `ft_putchar_fd()`   | Yes                |

## Variadic Functions
1. **What are Variadic Functions?**
   Variadic functions are those that can receive a variable number of arguments. In C, these functions are implemented using the `<stdarg.h>` library, which provides tools for handling the arguments passed to the function.

2. **How Are Arguments Stored?**
   When a function is called, the arguments are stored on the memory stack in reverse order, meaning the first argument is stored last and the last argument is stored first.

3. **Accessing Variadic Arguments**
   To access the arguments passed to a variadic function, we use the macros defined in `<stdarg.h>`, such as:

### Variadic Functions

- **`va_start(va_list args, last)`**: Initializes the `args` pointer to access the arguments. The second parameter, `last`, is the last fixed argument of the function.
- **`va_arg(va_list args, type)`**: Accesses the next argument in the list, according to the specified type.
- **`va_end(va_list args)`**: Ends the use of the `args` pointer, freeing the resources.

4. To declare a variadic function, we use the following syntax:
  ```c
   return_type function_name(data_type argument_name, ...);
