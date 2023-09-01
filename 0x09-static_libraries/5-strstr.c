#include "main.h"

/**
 * _strstr - finds the first occurrence of a substring in a string
 * @haystack: the string to search
 * @needle: the substring to find
 *
 * Return: pointer to 1st occur needle haystack or NULL if needle is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *ptr1 = haystack;
		char *ptr2 = needle;

		while (*ptr1 == *ptr2 && *ptr2 != '\0')
		{
			ptr1++;
			ptr2++;
		}
		if (*ptr2 == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
