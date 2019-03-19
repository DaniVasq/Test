#include "holberton.h"
#include <stdarg.h>

/**
 * _printf - 
 *
 *
 *
*/

int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	char *runner;
	int i = 0, chrcounter = 0;

	for (runner = format; *runner != '\0'; runner++)
	{
		while (*runner != '%')
		{
			_putchar(*runner, 1);
			runner++;
			i++;
			chrcounter++;
		}
		if (*runner == '%')
		{
			runner++;
			chrcounter += (find_value(*runner))(args);
		}
	}
	return (chrcounter);
}
