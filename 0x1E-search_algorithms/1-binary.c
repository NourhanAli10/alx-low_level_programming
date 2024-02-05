#include "search_algos.h"

/**
* binary_search - function that searches for a value in a sorted array
*  of integers using the Binary search algorithm
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: the value to search for
* Return: the first index where value is located or -1
*/

int binary_search(int *array, size_t size, int value)
{
	int low, mid, high;

	int i;

	low = 0;
	high = size - 1;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}

		printf("\n");
		mid = (low + high) / 2;
		if (value == array[mid])
		{
			return (mid);
		}
		else if (value > array[mid])
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
