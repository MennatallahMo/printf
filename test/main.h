#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/*main.c file*/

void print_hello_world();
void print_length(int, int);
void print_negative(int);
void print_unsigned(unsigned int);
void print_unsigned_octal(unsigned int);
void print_unsigned_hexadecimal(unsigned int);
void print_character(char);
void print_string(char *);
void print_address(void *);
void print_percent(void);
void print_len(int);
void print_unknown(void);

/* printf.c tasks 0,1 */

int _printf(const char *format, ...);

#endif
