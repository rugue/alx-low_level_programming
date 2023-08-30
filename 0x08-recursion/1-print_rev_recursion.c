#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse recursively
 * @s: The string to print
 *
 * Description: This function takes a string and prints it in reverse order
 * using recursion.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0') /* The base case: end of string */
	{
		_putchar('\n'); /* Print new line character */
		return;
	}

	_print_rev_recursion(s + 1); /* Recursive call with next character */
	_putchar(*s); /* Print the current character */
}
