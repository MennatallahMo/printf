#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024
#define BUFFER_FLUSH -1

#define NULL_STRING "(NULL)"
#define CONVERT_LOWERCASE 1
#define CONVERT_UNSIGNED 2
#define PARAMS_INIT {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}

/**
 * struct parameters - structure
 * @unsign: if value is unsigned then flag
 * @plus_flag: if it is specified then put it on
 * @space_flag: if space_flage is specified put it on
 * @hashtag_flag: if it is specified put on
 * @zero_flag: if specified put on
 * @minus_flag: if specified put on
 * @precision: if specified put on
 * @width: if specified put on
 * @l_modifier: if specified put on
 * @h_modifier: if specified put on
 */
typedef struct parameters
{
	unsigned int unsign           : 1;
	unsigned int space_flag       : 1;
	unsigned int zero_flag        : 1;
	unsigned int plus_flag        : 1;
	unsigned int hashtag_flag     : 1;
	unsigned int h_modifier       : 1;
	unsigned int l_modifier       : 1;
	unsigned int precision;
	unsigned int width;
} params_t;


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
	int(*f)(va_list, params_t);
} specifier_t;


/* printf functions */

int print_char(va_list ap, params_t *params);
int print_percent(va_list ap, params_t *params);
int print_string(va_list ap, params_t *params);


/* printf.c */

int _printf(const char *format, ...);

#endif
