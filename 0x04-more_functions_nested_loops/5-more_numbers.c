#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, followed by a new line
 */
void more_numbers(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 48; j < 48+10; j++)
		{
			_putchar(j);
		}

		for (k = 48; k < 48+5; k++)
		{
			_putchar(49);
			_putchar(k);
		}

		_putchar(10);
	}
}
