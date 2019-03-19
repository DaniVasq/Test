#include <stdio.h>
#include "holberton.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c, unsigned int length)
{
	return (write(1, &c, length));
}

/**
 * print_char - prints an char
 *
 */
void print_char(int n, int length)
{
	_putchar(n, length);
}

/**
 * print_int - prints an int
 *
 */

void print_int(int n, int length)
{
	_putchar(n, length);
}

void print_str(char *n, int length)
{
	_putchar(n, length);
}

/**
 * print_percent - prints a percent
 *
 */

void return_length(int n)
{
	int i;

	for(i = 0; i < n; i++)
		return(i);
}
