#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator:  the string to be printed between strings
 * @n: the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ptr;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(args, char *);
		if (i < n - 1 && separator != NULL)
			printf("%s%s", ptr == NULL ? "(nil)" : ptr, separator);
		else
			printf("%s", ptr == NULL ? "(nil)" : ptr);
	}
	printf("\n");
	va_end(args);
}
