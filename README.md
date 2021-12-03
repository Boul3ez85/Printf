# "C" printf function project

<hr>

### 1- General Requirements

##### Here are the general requirements:

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory Your code should use the Betty style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called holberton.h
- Don’t forget to push your header file
- All your header files should be include guarded
- Note that we will not provide the _putchar function for this project

<br>

### 2- Authorized functions and macros

- write (man 2 write)
- malloc (man 3 malloc)
- free (man 3 free)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_copy (man 3 va_copy)
- va_arg (man 3 va_arg)

<br>

### 3- Compilation

- The code must be compiled this way: $ gcc -Wall -Werror -Wextra -pedantic *.c
- As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)
- Our main files will include your main header file (holberton.h): #include holberton.h
- You might want to look at the gcc flag -Wno-format when testing with your _printf and the standard printf.

<br>

### 4- Overview:

- This project consists of a custom made printf function for C language that allows different input arguments and options; its development was part of an intensive coding program in Holberton School Tunis.

<br>

### 5- Description and synopsis of the project:

- The function returns the number of characters printed (excluding the null byte used to end output to strings). If an output error is encountered, a negative value of -1 is returned.
- The prototype:
```
int _printf(char format, ...) {...}
```

- The main function of the printf function project:

> _printf.c
<br>

- The header file that connects all of the files in the project and allows functions and structures to work with each other through prototype statements:

> holberton.h
<br>

- the manual page of the project:

> man_3_printf

<br>

### 6- Compiling & Testing:

- The project was compiled and tested with GNU GCC 5.4.0 with different error flags:
```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

<br>

> <b>-Wall</b>: Enables all the warnings about constructions.

<br>

> <b>-Werror</b>: Enables some extra warning flags that are not enabled by -Wall.

<br>

> <b>-Wextra</b>: Make all warnings into hard errors.

<br>

> <b>-pedantic</b>: Issue all the mandatory diagnostics listed in the C standard.

<br>

> <b>-std=gnu89</b>: gcc ANSI standard version.

<br>

### 9- Output:

![](https://i.imgur.com/ryTPmQO.png)

<br>

### 8- Built with:

Ubuntu 18.06 LTS

<br>

#### -Authors

Moez Ben Rebah: https://github.com/Boul3ez85

Mokhtar Touiri: https://github.com/MokhtarTouiri
