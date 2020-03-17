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

if (format == NULL)
return (-1);
for (i = 0; format[i] != '\0' ; i++)
{
if (format[i] == '%')
i++;
}
if (format[i] == '\0')
{
return (-1);
for (; format[i] == ' '; i++)
;
x = get_struct(format[i + 1]);
if (x == NULL)
{
_putchar('%');
_putchar(format[i]);
check += 2;
}
else
check += x(parameters);
}
else
{
_putchar(format[i]);
check++;
}
va_end(parameters);
return (check);
}
