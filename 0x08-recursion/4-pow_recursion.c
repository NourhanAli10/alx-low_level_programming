#include "main.h"

/**
  *_pow_recursion - function that returns the value of x
  * raised to the power of y
  * @x: the base
  * @y: the exponent
  * Return: value of x raised to y , -1 if y lower than 0
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
