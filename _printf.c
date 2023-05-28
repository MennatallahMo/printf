#include "main.h"

/*
 * _printf - produces output according to a format
 * @format: a character string
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int i;
	va_list ap;

	va_start(ap, format);
	if (format == '\0' || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && format[2] == '\0')
		return (-1);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			printed_char += _putchar(format[i]);
			continue;
		}
