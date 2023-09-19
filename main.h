#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier
 * @f: type pointer to function that handles the conversion
 */

typedef struct format
{
	char *id;
	int (*f)(va_list args);
} format_match;


int _putchar(int c);
int _strlen(char *s);
int printf_string(va_list args);
int printf_char(va_list args);
int printf_int(va_list args);
int printf_dec(va_list args);
int printf_binary(va_list args);
int printf_unsigned(va_list args);
int printf_pointer(va_list args);
int printf_hex_sec(unsigned long int num);
int printf_hex(va_list args);
int printf_oct(va_list args);
int printf_HEX_(va_list args);
int _printf(const char *format, ...);

#endif
