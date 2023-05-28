#include "main.h"

/**
 * _specifier - finds the format function
 * @s: the format string
 * Return: no of bytes to be printed
 */

int (*get_specifier(char *s))(va_list ap, params_t *params)
{
	specifier_t specifiers[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};
	int n = 0;

	while (specifier[n].specifier)
	{
		if (*s == specifiers[n].specifier[0])
		{
			return (specifiers[n].f);
		}
		n++;
	}
	return (NULL);
}
