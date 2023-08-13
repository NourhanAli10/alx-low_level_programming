#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the name of the file it was compiled from
 * Return: the name of the file
*/

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
