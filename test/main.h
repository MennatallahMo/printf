#ifndef _PRINTF_H
#define _PRINTF_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024
#define BUFFER_FLUSH -1

#define CONVERT_LOWERCASE    1
#define CONVERT_UNSIGNED     2

#define NULL_STRING "(null)"

/* _puts.c */

int _putchar(int c);
int _puts(char *str);

/**
 * struct specifier - Structure token
 * @specifier: token to be formated
 * @f: Function
 */
typedef struct specifier
{
	char *specifier;
	int (*f)(va_list);
} specifier_t;


/* printf functions */

int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int get_print_function(char *s, va_list args);
int convert(long int num, int base);
int _strlen(char *s);
int print_reverse(va_list args);
int print_rot13(va_list args);
int print_unsigned(va_list args);
int print_number(char *str);

/*convert numbers */

int print_binary(va_list args);
int print_Hex(va_list args);
int print_binary(va_list args);
int print_octal(va_list args);
int print_hex(va_list args);

/* printf.c */

int _printf(const char *format, ...);

#endif
