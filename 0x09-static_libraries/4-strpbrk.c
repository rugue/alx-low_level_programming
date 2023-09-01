#include "main.h"
/**
 * _strpbrk - finds 1st occur of char from a set of characters in a string
 * @s: the string to search
 * @accept: the set of characters to search for
 *
 * Return: point to 1st occur of char in s or NULL if no char is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *ptr = accept;

		while (*ptr != '\0')
		{
			if (*s == *ptr)
			{
				return (s);
			}
			ptr++;
		}
		s++;
	}
	return (0);
}
