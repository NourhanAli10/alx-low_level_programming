#include <stdio.h>
/*
   * This program demonstrates the use of the sizeof operator
   * to determine the size of various data types in C
   * Return: Always 0 (Success)
   */
int main(void)
{
	printf("Size of a char : %d byte(s) \n", sizeof(char));
	printf("Size of an int: %d byte(s) \n", sizeof(int));
	printf("Size of a long long int : %d byte(s) \n", sizeof(long long int));
	printf("Size of a float : %d byte(s) \n", sizeof(float));
	return (0);
}
