#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
* interpolation_search - Searches for a value in a sorted array
* using Interpolation Search
* @array: Pointer to the first element of the array
* @size: Number of elements in the array
* @value: Value to search for
*
* Return: Index where the value is located, or -1 if not found or array is NULL
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high;
	size_t numerator, denominator;
	size_t pos;


	if (array == NULL || size == 0)
		return (-1);

	low = 0, high = size - 1;

	while (low <= high && value >= array[low] && value <= array[high])
	{
		numerator = value - array[low];
		denominator = array[high] - array[low];

		if (denominator == 0)
			return (-1);

		pos = low + ((double)(high - low) / denominator) * numerator;

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	printf("Value checked array[%lu] is out of range\n", low);
	return (-1);
}

