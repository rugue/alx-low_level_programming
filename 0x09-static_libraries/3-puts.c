#include "main.h"

/**
 * _puts - prints a string to the standard output stream
 * @s: the string to print
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
