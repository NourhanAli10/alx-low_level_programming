#include "main.h"

/**
  * _isupper - function that checks for uppercase character.
  *
  *@c: the character in ASCi table
  *
  * Return: 1 for uppercase. 0 for otherwise
  */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
