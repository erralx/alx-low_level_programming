#include <stdio.h>

/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100 ; i++)
	{
		int fizz = (i % 3);
		int buzz = (i % 5);
		int fizzbuzz = fizz + buzz;

		if (fizzbuzz == 0)
		{
			printf("FizzBuzz");
		}
		else if (fizz == 0)
		{
			printf("Fizz");
		}
		else if (buzz == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		printf(" ");
	}

	printf("\n");

	return (0);
}
