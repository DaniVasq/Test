#include <stdio.h>
#include "holberton.h"
#include <unistd.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char *c)
{
	return (write(1, &c, 1));
}

/**
 * print_char - prints an char
 *
 */
int print_char(va_list chr)
{
	_putchar(va_arg(chr, int));
	return (1);
}

/**
 *
 *
 *
*/

int print_str(va_list s)
{
	int i;
	char *str = va_arg(s, char *);

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i - 1);
}

/**
 *
 *
 *
 *
*/

void (*find_value(char n))(va_list)
{
	int i = 0;

	lo_p ftr[] = {
	{"c", print_char}
	{"s", print_str}
	{"%", print_char}
	{NULL, NULL}
	};

	while (i <= 3)
	{
		if (n == ftr[i]->chr)
			return (ftr[i].f);
		else
			return (n);
	i++;
	}
}
