#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 1 if arguments passed != 1,
 * 0 if argument < 0,
 * number of coins otherwise
 */
int main(int argc, char **argv)
{
	int cents, coins = 0, curr_coins;
	int COINS[] = {25, 10, 5, 2, 1};
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		if (cents >= COINS[i])
		{
			curr_coins = cents / COINS[i];
			coins += curr_coins;
			cents -= curr_coins * COINS[i];
		}
	}

	printf("%d\n", coins);
	return (0);
} 
