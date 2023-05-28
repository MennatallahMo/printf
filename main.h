#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#define BUFFER_SIZE 1024
#define BUFFER_FLUSH -1
/* printf.c tasks 0,1 */

int _printf(const char *format, ...);
int _putchar(char c);

#endif
