#include "holberton.h"
/**
 *_printf - function to print anything
 *@format: types of argument passed to the function
 *
 *Return: number of characters printed
 */
int _printf(const char *format, ...)
{
int check = 0;
va_list parameters;
int (*func)(va_list);

va_start(parameters, format);
if (format == NULL)
return (-1);
for (; *(format); format++)
if (*(format) == '%')
{
if (!*(format + 1))
{
return (-1);
}
if (*(format + 1) == '%')
{
_putchar('%');
}
else if (*(format + 1) != '%')
{
check += _putchar(*(format + 1));
format++;
}
else
{
func = get_func(*(format + 1));
check = func(parameters);
format++;
}
}
else
{
check += _putchar(*(format));
}
va_end(parameters);
return (check);
}
