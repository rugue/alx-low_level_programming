#include "main.h"

/**
 * _strcpy - copies a string from source to destination
 * @dest: the destination string
 * @src: the source string
 *
 * Return: a pointer to the destination string
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
