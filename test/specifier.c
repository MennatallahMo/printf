#include "main.h"

/**
 * check_specifier - finds suitable print function
 * @s: the format string
 * Return: no of bytes printed bytes
 */

int (*check_specifier(char *s))(va_list args)
{
	specifier_t specifiers[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"i", print_int},
		{"d", print_int},
		{"r", print_reverse},
		{"R", print_rot13},
		{"b", print_binary},
		{"o", print_octal},
		{"u", print_unsigned},
		{"x", print_hex},
		{"X", print_Hex},
		{NULL, NULL}
	};
	int n = 0;

	while (specifiers[n].specifier)
	{
		if (*s == specifiers[n].specifier[0])
		{
			return (specifiers[n].f);
		}
		n++;
	}
	return (NULL);
}

/**
 * get_print_function - finds the print function
 * @s: format string
 * @args: pointer to arguments
 * Return: no of printed bytes
 */

int get_print_function(char *s, va_list args)
{
	int (*f)(va_list) = check_specifier(s);

	if (f)
		return (f(args));
	return (0);
}
