#include "main.h"

/**
 * main - Entry point
 * @argc: number of argument
 * @argv: the arguments passed
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int cents, i;
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(coins) / sizeof(coins[0]);
	int min_coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < num_coins; i++)
	{
		min_coins += cents / coins[i];
		cents = cents % coins[i];
	}
	printf("%d\n", min_coins);
	return (0);
}
