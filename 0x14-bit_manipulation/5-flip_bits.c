#include "main.h"


/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = 0, index;

	index = n ^ m;

	while (index > 0)
	{
		if (index & 1)
		{
			mask++;
		}
		index >>= 1;
	}
	return (mask);
}
