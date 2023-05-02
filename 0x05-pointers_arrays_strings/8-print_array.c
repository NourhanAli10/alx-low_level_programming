#include "main.h"
/**
*  print_array - function that prints n element of an array integers
* @a: the pointer that holds the array
* @n: the number of elements of the array to be printed
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)
{
printf(", ");
}
}
printf("\n");
}
