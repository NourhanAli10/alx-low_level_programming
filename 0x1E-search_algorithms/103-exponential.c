#include "search_algos.h"

/**
* exponential_search - Searches for a value in a sorted array
* using Interpolation Search
* @array: Pointer to the first element of the array
* @size: Number of elements in the array
* @value: Value to search for
* Return: Index where the value is located, or -1 if not found or array is NULL
*/

int exponential_search(int *array, size_t size, int value)
{
	size_t bound;
	size_t left, right;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
	{
		printf("Value checked array[0] = [%d]\n", array[0]);
		return (0);
	}

	bound = 1;

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	left = bound / 2;
	right = (bound < size - 1) ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	return (binary_search(array, left, right, value));
}

/**
* binary_search - Searches for a value in a sorted array using Binary Search
* @array: Pointer to the first element of the array
* @left: Left index of the subarray
* @right: Right index of the subarray
* @value: Value to search for
* Return: Index where the value is located, or -1 if not found
*/

int binary_search(int *array, size_t left, size_t right, int value)
{
	size_t mid;
	size_t i;

	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; ++i)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
