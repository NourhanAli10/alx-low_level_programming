#include "main.h"

/**
 * factorial -  function returns the factorial of a given number
 * @n : the given number
 * Return: the factorial of a given number or -1 to indicate an error
 */
int factorial(int n)
{
	int res;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	res =   n * factorial(n - 1);
	return (res);
}
