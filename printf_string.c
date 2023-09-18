#include "main.h"

/**
 * printf_string - print a string
 * @s: string to print
 * Return: the length of string
 */

int printf_string(char *s)
{
	int i, str_len;

	if (s == NULL)
	{
		s = "(null)";
		str_len = _strlen(s);
		for (i = 0; i < str_len; i++)
			_putchar(s[i]);
		return (str_len);
	}
	else
	{
		str_len = _strlen(s);
		for (i = 0; i < str_len; i++)
			_putchar(s[i]);
		return (str_len);
	}
}
