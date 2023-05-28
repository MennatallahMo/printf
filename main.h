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

int print_char(valist ap, params_t *params);
int print_percent(valist ap, params_t *params);
int print_string(valist ap, params_t *params);


/* printf.c */

int _printf(const char *format, ...);

#endif
