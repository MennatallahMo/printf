#include "main.h"

/**
 * get_specifier - handes the format function
 * @s: string
 * Return: printed bytes
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
