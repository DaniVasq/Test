#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - produces output according to format.
 *
 *
 *
*/

int _printf(const char *format, ...)
{
	va_list args;
	int chrcounter = 0, i;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		while (format[i] != '%' && format[i] != '\0')
		{
			_putchar(format[i]);
			i++;
			chrcounter++;
		}
		if (format[i] == '%')
		{
			i++;
			chrcounter += (find_value(format[i]))(args);
		}
	}
	return (chrcounter);
}
