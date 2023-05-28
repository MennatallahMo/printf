#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: a character string
 * @...:  a variable number of arguments
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			if (*++format == 'c')
			{
				putchar(va_arg(args, int));
			} else if (*format == 's')
			{
				char *str = va_arg(args, char *);

				while (*str != '\0')
				{
					putchar(*str);
					str++;
				}
			} else if (*format == '%')
			{
				putchar('%');
			} else
			{
			/* do nothing */
			}
		} else
		{
			putchar(*format);
		}
		format++;
	}
	va_end(args);

	return (count);
}
