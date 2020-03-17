#include "holberton.h"

/**
 *_printf - function to print anything
 *@format: types of argument passed to the function
 *
 *Return: number of characters printed
 */

int _printf(const char *format, ...)
{
int i = 0;
int (*x)(va_list);
int check = 0;
va_list parameters;

va_start(parameters, format);

if (format != NULL && format[i] != '\0')
{

for (i = 0; format[i] && format[i] != '%'; i++)
{
_putchar(format[i]);
check++;
}
if (!format[i])
return (check);

if (format[i] == '%')
{
x = get_struct(format[i + 1]);
if (x != NULL)
{
check += x(parameters);
i += 2;
}
else
{
_putchar(format[i + 1]);
check++;
i++;
}
}
if (format == NULL)
return (check);
}
va_end(parameters);
return (check);
}
