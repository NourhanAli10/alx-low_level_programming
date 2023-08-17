#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n:  the number of arguments
 * Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int x, sum = 0;
	va_list nums;

	va_start(nums, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		x = va_arg(nums, int);
		sum += x;
	}
	return (sum);
}

