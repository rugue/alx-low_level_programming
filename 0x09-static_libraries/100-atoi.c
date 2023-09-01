#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of s
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
		}
		else
		{
			break;
		}
		s++;
	}
	return (sign * result);
}
