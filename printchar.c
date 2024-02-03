#include "main.h"

/**
 * printc - prints a character.
 * @val: arguments.
 * Return: integer.
 */
int printc(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
