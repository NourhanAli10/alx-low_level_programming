#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator:  the string to be printed between numbers
 * @n: the number of integers passed to the function
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);
	if (separator == NULL)
		printf(" ");
	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%d%s", va_arg(nums, int), separator);
		else
			printf("%d", va_arg(nums, int));
	}
	printf("\n");
}
