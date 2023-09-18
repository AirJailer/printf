#ifndef MAIN_H
#define MAIN_H


#include <stdarg.h>
#include <unistd.h>


int _putchar(char c);
int _strlen(char *s);
int printf_string(char *s);
int printf_percent(void);
int printf_int(va_list args);
int printf_dec(va_list args);
int _printf(const char *format, ...);

#endif
