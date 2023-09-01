#include "main.h"

/**
 * _memcpy - copies a block of memory from source to destination
 * @dest: pointer to the destination block of memory
 * @src: pointer to the source block of memory
 * @n: number of bytes to copy
 *
 * Return: a pointer to the destination block of memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (ptr);
}
