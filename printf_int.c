#include "main.h"

/**
 * printf_int - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */

int printf_int(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit, inc = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			inc = inc * 10;
			num = num / 10;
		}
		num = n;
		while (inc > 0)
		{
			digit = num / inc;
			_putchar(digit + '0');
			num = num - (digit * inc);
			inc = inc / 10;
			i++;
		}
	}
	_putchar(last + '0');
	return (i);
}
