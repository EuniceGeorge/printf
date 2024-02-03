#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _printf - Build out the printf function
 * @format: string passed with possible format specifiers
 * Return: number of characters printed
 */
int _printf(const char * const format, ...)
{
	convert p[] = {
		{"%s", print_s}, {"%c", printc},
		{"%%", print37},
		{"%i", printi}, {"%d", printd}, {"%r", printrevs},
		{"%R", printrot13}, {"%b", printbin},
		{"%u", printunsigned},
		{"%o", printoct}, {"%x", printhex}, {"%X", printHEX},
		{"%S", print_exc_string}, {"%p", printpointer}
	};

	va_list args;
	int i = 0, j, length = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[i] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (p[j].ph[0] == format[i] && p[j].ph[1] == format[i + 1])
			{
				length += p[j].function(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		length++;
		i++;
	}
	va_end(args);
	return (length);
}
