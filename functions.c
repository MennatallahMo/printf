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

/**
 * print_reverse - prints string in reverse
 * @args: the string
 * Return: number of printed bytes
 */
int print_reverse(va_list args)
{
	int len, sum = 0;
	char *str = va_arg(args, char *);

	if (str)
	{
		for (len = 0; *str; str++)
			len++;
		str--;
		for (; len > 0; len--, str--)
			sum += _putchar(*str);
	}
	return (sum);
}

/**
 * print_rot13 - prints in rot13
 * @args: the string to be printed
 * Return: number of printed bytes
 */
int print_rot13(va_list args)
{
	int i = 0, j = 0;
	int sum = 0;
	char arr[] = "NOPQRSTUVWXYZABCDEFGHIJKLM      nopqrstuvwxyzabcdefghijklm";
	char *a = va_arg(args, char *);

	while (a[i])
	{
		if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z'))
		{
			j = a[i] - 65;
			sum += _putchar(arr[j]);
		}
		else
			sum += _putchar(a[i]);
		i++;
	}
	return (sum);
}

