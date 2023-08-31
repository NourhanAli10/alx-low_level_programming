#include "main.h"

/**
 * get_endianness -  checks the endianness
 * Return: 0 or 1
 */

int get_endianness(void)
{
	int index;

	index = 2;

	if (index & 1)
	{
		return (0);
	}

	return (1);
}
