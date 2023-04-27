#include "main.h"

/**
  * more_numbers -  prints 10 times the numbers, from 0 to 14
  *
  *
  * Return: Always 0.
  */

void more_numbers(void)
{
	int i;
	int num;

	for (i = 1; i <= 10; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
				_putchar(num / 10 + '0');

			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
