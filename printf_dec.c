#include "main.h"


/**
 * printf_dec - prints decimal
 * @args: argument to print
 * Return: number of charachters printed
 */

int printf_dec(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit;
	int i = 1;
	int inc = 1;

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
