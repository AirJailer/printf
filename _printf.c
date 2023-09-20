#include "main.h"

/**
 * _printf - is a function tha produces output according to a format.
 * @format: format to look for and print.
 * Return: The length of chracters printed.
 */

int _printf(const char *format, ...)
{
	format_match m[] = {
		{"%s", printf_string}, {"%c", printf_char}, {"%r", printf_reverse},
		{"%i", printf_int}, {"%d", printf_dec}, {"%b", printf_binary},
		{"%u", printf_unsigned}, {"%p", printf_pointer}, {"%o", printf_oct},
		{"%x", printf_hex}, {"%X", printf_HEX_}, {"%S", printf_special_string}
	};
	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[i] != '\0')
	{
		j = 11;

		if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar(37);
			i = i + 2;
			len++;
		}

		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len += m[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
