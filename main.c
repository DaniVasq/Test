#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i,j;

	i = printf("%s", NULL);
	j = _printf("%s", NULL);
	printf("True %i\n", i);
	printf("%i\n", j);
	_printf("--------- Print new line");
	_printf("%c",'\n');
	_printf("ESTO\n");
	return (0);
}
