#include "main.h"
/**
 * print_char - prints a character
 * @args: argument pointer
 * Return: no of printed char
 */
int print_char(va_list args)
{
	unsigned int count = 0, ch = va_arg(args, int);

	count += _putchar(ch);
	return (count);
}
/**
 * print_string - prints string
 * @args: argument pointer
 * Return: no of printed chars
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	unsigned int count = 0;

	switch ((int)(!str))
		case 1:
			str = NULL_STRING;

	count += _puts(str);
	return (count);
}

/**
 * print_percent - prints percent string
 * @args: argument pointer
 * Return: no of printed char
 */
int print_percent(va_list args)
{
	(void)args;
	return (_putchar('%'));
}

/**
 * convert - converter function
 * @num: number
 * @base: a base
 * Return: a string
 */
char *convert(long int num, int base)
{
	static char *array;
	static char buffer[50];
	char sign = 0;
	char *p;
	unsigned long n = num;

	if (num < 0)
	{
		n = -num;
		sign = '-';
	}
	array = "0123456789";
	p = &buffer[49];
	p = '\0';

	do {
		*--p = array[n % base];
		n /= base;
	} while (n != 0);

	if (sign)
		*--p = sign;
	return (p);
}

/**
 * print_int - integer is printed
 * @args: argument pointer
 * Return: no of printed characters
 */
int print_int(va_list args)
{
	long l;

	int l = (int)va_arg(args, int);

	return (print_number(convert(l, 10)));
}
