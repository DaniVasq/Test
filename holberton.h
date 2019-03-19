#ifndef HOLBERTON_H
#define HOLBERTON_H

int _printf(const char *format, ...);
int _putchar(char c);

/**
 *
 *
 *
 *
*/

typedef struct lo
{
	char chr;
	void (*f)(va_list);
} lo_p;

#endif
