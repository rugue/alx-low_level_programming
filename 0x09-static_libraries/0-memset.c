#include "main.h"

/**
 * _memset - fills a block of memory with a specified value
 * @s: the block of memory to fill
 * @b: the value to fill the block of memory with
 * @n: the number of bytes to fill
 *
 * Return: a pointer to the block of memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (ptr);
}
