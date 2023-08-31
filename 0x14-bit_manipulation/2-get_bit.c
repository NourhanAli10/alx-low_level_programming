#include "main.h"


/**
 * get_bit -  returns the value of a bit at a given index
 * @n: long int
 * @index: index
 * Return: Bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > sizeof(n) * 8)
	{
		return (-1);
	}

	mask <<= index;

	if (mask & n)
		return (1);
	else
		return (0);
}
