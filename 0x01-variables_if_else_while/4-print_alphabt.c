#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main
 * Return: 0
 */
int main(void)
{
	char string[] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(string[i]);
	}
	putchar('\n');
	return (0);
}
