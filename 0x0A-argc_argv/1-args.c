#include <stdio.h>

/**
 * main - Entry point
 * @argc: number of argument
 * @argv: the arguments passed
 * Return: 0
*/

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	if (argc >= 1)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}

