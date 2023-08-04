#include "main.h"

/**
 * main - Entry point
 * @argc: number of argument
 * @argv: the arguments passed
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int result = 0;
	int i, a;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *num = argv[i];
		int j = 0;

		while (num[j] != '\0')
		{
			if (!isdigit(num[j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		a = atoi(num);
		result += a;
	}
	printf("%d\n", result);
	return (0);
}

