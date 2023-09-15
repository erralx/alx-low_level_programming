#include <stdio.h>
#include <math.h>

/**
 * main - entry
 *
 * Return: 0 
 */
int main(void)
{
	long n = 612852475143;
	long f;
 
	long i = 0;

	double n_sqrt = sqrt(n);

	for (i = 1; i <= n_sqrt; i++)
	{
		if (n % i == 0)
		{
			f = n / i;
		}
	}

	printf("%ld\n", f);

	return (0);
}
