#include "main.h"

/**
 * _isupper - the function checks for uppercase characters
 * @c: int type numbers
 * Return: 1 if uppercase, else it will be 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
