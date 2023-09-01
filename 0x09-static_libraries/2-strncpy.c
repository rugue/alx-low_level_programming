#include "main.h"

/**
 * _strncpy - copies n characters of a string from source to destination
 * @dest: the destination string
 * @src: the source string
 * @n: the number of characters to copy
 *
 * Return: a pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (ptr);
}
