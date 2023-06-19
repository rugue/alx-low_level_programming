#include <unistd.h>

/**
 * _putchar - this writes the character c to stdout
 * @c: character to print
 *
 * Return: On success 1 and 
 * On error, -1 is returned, and errno is set well
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
