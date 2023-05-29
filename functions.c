#include "main.h"
/**
 * _strlen - returns the length of string
 * @s: the string
 * Return: the length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}
