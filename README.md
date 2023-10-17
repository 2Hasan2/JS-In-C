# C Utility Libraries

This repository provides a collection of C utility libraries for working with arrays, numbers, and strings. Each library contains a set of functions that can be used in your C programs to perform various operations.

## Table of Contents

- [Array Utility Library](#array-utility-library)
- [Number Utility Library](#number-utility-library)
- [String Utility Library](#string-utility-library)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [License](#license)
- [Contributing](#contributing)
- [Acknowledgments](#acknowledgments)

## Array Utility Library

The Array Utility Library provides functions for dynamic array management, including adding elements to the end of an array and removing the last element. This library is designed to simplify working with arrays in C programs.

- **Header File:** [array_utils.h](array_utils.h)

## Number Utility Library

The Number Utility Library offers a range of mathematical operations, such as calculating absolute values, rounding, trigonometric functions, and more. This library is designed to help with common numerical tasks in C programs.

- **Header File:** [number_utils.h](number_utils.h)

## String Utility Library

The String Utility Library provides functions for string manipulation, including concatenation, case conversion, trimming, substring searching, and replacement. This library can be helpful for text processing in C programs.

- **Header File:** [string_utils.h](string_utils.h)

## Getting Started

### Prerequisites

To use these libraries, you need a C compiler, such as GCC or Clang, installed on your system.

### Installation

1. Clone this repository or download the source code.

2. Compile the source code for each library:

   - Array Utility Library:
     ```bash
     gcc -c array_utils.c
     ar rcs libarray_utils.a array_utils.o
     ```

   - Number Utility Library:
     ```bash
     gcc -c number_utils.c
     ar rcs libnumber_utils.a number_utils.o
     ```

   - String Utility Library:
     ```bash
     gcc -c string_utils.c
     ar rcs libstring_utils.a string_utils.o
     ```

3. Include the respective header file in your C programs, such as:
   ```c
   #include "array_utils.h"
   #include "number_utils.h"
   #include "string_utils.h"
    ```
4. Link the static library for each library in your C programs, such as:
    ```bash
    gcc -o my_program my_program.c -L. -larray_utils -lnumber_utils -lstring_utils
    ```