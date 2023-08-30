#include "main.h"

/**
 * _puts_recursion - Prints a string
 * @s: The string to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* The base case: end of string */
	{
		_putchar('\n'); /* Print new line character */
		return;
	}
	_putchar(*s); /* Print the current character */
	_puts_recursion(s + 1); /* Recursive call with next character */
}
