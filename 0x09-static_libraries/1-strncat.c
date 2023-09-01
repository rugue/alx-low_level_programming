#include "main.h"

/**
 * _strncat - concatenates n characters of a string to another string
 * @dest: the destination string
 * @src: the source string
 * @n: the number of characters to concatenate
 *
 * Return: a pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (ptr);
}
