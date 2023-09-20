#include "main.h"

/**
 * printf_char - prints a char.
 * @args: arguments.
 * Return: an integer value 1.
 */

int printf_char(va_list args)
{
	char s;

	s = va_arg(args, int);
	_putchar(s);
	return (1);
}
