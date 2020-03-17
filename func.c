#include "holberton.h"
#include <stdarg.h>

/**
 *print_c - function to print character
 *@parameters: characters to print
 *
 *Return: always 1
 */

int print_c(va_list parameters)
{
_putchar(va_arg(parameters, int));
return (1);
}

/**
 *print_s - function to print string
 *@parameters: string to print
 *
 *Return: number of characters to print
 */

int print_s(va_list parameters)
{
int i = 0;
char *l = va_arg(parameters, char *);

if (l == NULL)
l = "(null)";

while (l[i])
{
_putchar(l[i]);
i++;
}
return (i);
}


/**
 *print_percent - function to print %
 *@parameters: unused
 *
 *Return: always 1
 */

int print_percent(__attribute__((unused))va_list parameters)
{
char c = '%';
_putchar(c);
return (1);
}
