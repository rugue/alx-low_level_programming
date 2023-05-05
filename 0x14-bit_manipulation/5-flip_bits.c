#include "main.h"

/**
 * flipBits - this helps counts the number of bits for changing
 * to receive from a number to another number
 * @n: the first number
 * @m: the second number
 *
 * Return: numb of bits for change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
