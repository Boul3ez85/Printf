#include "holberton.h"

/**
 *get_struct - structure
 *@a: character
 *
 *Return: null
 */

int (*get_struct(const char a))(va_list)
{
format_t structs_pr[] = {
{"c", print_c},
{"s", print_s},
{"%", print_percent},
{"i", print_integer},
{"d", print_decimal},
{NULL, NULL}
};

int x = 0;

while (structs_pr[x].f)
{
if (a == *structs_pr[x].spc)
{
return (structs_pr[x].f);
}
x++;
}
return (NULL);
}
