#include <unistd.h>
/**
 * _putchar - prints single character to standard output stream
 * @c: The character to print
 *
 * Return: On success, the number of chars printed. On error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
