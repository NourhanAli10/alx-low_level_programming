#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory
 * @b: the size
 * Return: the pointer with allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}
