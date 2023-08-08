#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: the size of the array of character
 * @c: character
 * Return: the size
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc((sizeof(char)) * size);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	if (size == 0 || array == NULL)
	{
		return (NULL);
	}
	return (array);
}
