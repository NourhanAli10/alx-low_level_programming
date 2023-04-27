#include "main.h"

/**
  * _isdigit - function that checks for uppercase character.
  *
  *@c: the character in ASCi table
  *
  * Return: 1 for uppercase. 0 for otherwise
  */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

