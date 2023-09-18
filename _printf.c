#include "main.h"

/**
 * _printf - function that produces output according to a format.
 * @format: format to print
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				char c = va_arg(args, int);

				len += _putchar(c);
			}
			else if (format[i] == '%')
			{
				len += printf_percent();
			}
			else if (format[i] == 'i')
				len += printf_int(args);
			else if (format[i] == 'd')
				len += printf_dec(args);
			else if (format[i] == 's')
			{
				char *s = va_arg(args, char *);

				len += printf_string(s);
			}
		}
		else
		{
			len += _putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (len);
}
