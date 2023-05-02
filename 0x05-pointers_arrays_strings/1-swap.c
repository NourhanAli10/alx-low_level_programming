#include "main.h"
/**
* swap_int - function that swaps the values of two integers
* @a: the pointer that holds the value of variable a
* @b: the pointer that holds the value of variable b
*/
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
