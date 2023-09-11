#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main
 * Return: 0
 */
int main(void)
{
	char lowerCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		putchar(lowerCase);
	}
	putchar('\n');
	return (0);
}
