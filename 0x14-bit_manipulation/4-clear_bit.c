#include "main.h"


/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: long int
 * @index: index
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

		if (index < sizeof(n) * 8)
		{
			*n = (*n & ~mask);
			return (1);
		}

		return (-1);
}
