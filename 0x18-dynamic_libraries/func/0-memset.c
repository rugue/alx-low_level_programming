#include "main.h"

/**
 * _memset - this Fills memory with a constant byte
 * @s: the buffer array
 * @b: the constant byte
 * @n: the numb of bytes of memory area to fill
 * Description: Fill the first `n` bytes of the memory area pointed to by `s`
 * with the constant byte `b`.
 * Return: the Pointer to memory area `s`
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		s[count] = b;
		count++;
	}

	return (s);
}
