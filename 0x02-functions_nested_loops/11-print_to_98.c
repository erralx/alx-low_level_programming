#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number to start printing from
 *
 * Return: void
 */
void print_to_98(int n)
{
	for (; n <= 98; n++)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
}
