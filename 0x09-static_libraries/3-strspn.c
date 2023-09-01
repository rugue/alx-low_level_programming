#include "main.h"

/**
 * _strspn - find length of initial string that contains chars from string
 * @s: the string to search
 * @accept: the string of characters to search for
 *
 * Return: length of initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		char *ptr = accept;

		while (*ptr != '\0')
		{
			if (*s == *ptr)
			{
				count++;
				break;
			}
			ptr++;
		}
		if (*ptr == '\0')
		{
			break;
		}
		s++;
	}
	return (count);
}
