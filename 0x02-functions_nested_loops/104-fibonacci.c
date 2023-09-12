#include <stdio.h>

/**
  * main - Prints the first 98 Fibonacci numbers
  *
  * Return: 0
  */
int main(void)
{
	unsigned long long int fib[100];

	fib[0] = 1;
	fib[1] = 2;

	printf("%llu\n%llu\n", fib[0], fib[1]);

	for (int i = 2; i < 98; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
		printf("%llu\n", fib[i]);
	}

	return 0;
}
