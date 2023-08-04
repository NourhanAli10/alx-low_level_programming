#include "main.h"

/**
 * main - Entry point
 * @argc: number of argument
 * @argv: the arguments passed
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int a, b;
	int result;

	if (argc < 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		a =  atoi(argv[1]);
		b =  atoi(argv[2]);

		result = a * b;
		printf("%d\n", result);
	}
	return (0);
}
