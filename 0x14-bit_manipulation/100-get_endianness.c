#include "main.h"

/**
 * getEndianness - this helps check that a machine is either
 * a little or big endian
 * Return: 0 will be for big, 1 will be for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
