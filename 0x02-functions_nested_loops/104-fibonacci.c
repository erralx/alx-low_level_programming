#include <stdio.h>

/**
  * main - Prints the first 98 Fibonacci numbers
  *
  * Return: 0
  */
int main(void)
{
	int i = 0;
	unsigned long long int j = 1, k = 2;

	while (i < 98)
	{
		if (i == 0)
			printf("%ld", j);
		else if (i == 1)
			printf(", %ld", k);
		else
		{
			k += j;
			j = k - j;
			printf(", %ld", k);
		}

		++i;
	}

	printf("\n");
	return (0);
}
