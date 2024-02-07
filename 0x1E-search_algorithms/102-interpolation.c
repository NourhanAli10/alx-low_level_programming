#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
* interpolation_search - Searches for a value in a sorted array
* using Interpolation Search
* @array: Pointer to the first element of the array
* @size: Number of elements in the array
* @value: Value to search for
* Return: Index where the value is located, or -1 if not found or array is NULL
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos = 0, low = 0, high = size - 1;

	if (!array || !size)
		return (-1);

	while (1)
	{
		pos = low + (((double)(high - low) /
			  (array[high] - array[low])) * (value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}
	return (-1);
}
