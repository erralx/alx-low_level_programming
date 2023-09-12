#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int n1, n2;
	int tens, ones;
	int v;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = 0; n2 < 10; n2++)
		{
			if (n2 == 0)
			{
				_putchar(48);
				continue;
			}

			_putchar(44);
			_putchar(32);

			v = n1 * n2;
			tens = v / 10;
			ones = v % 10;

			if (tens == 0)
			{
				_putchar(32);
				_putchar(48 + ones);
			}
			else
			{
				_putchar(48 + tens);
				_putchar(48 + ones);
			}
		}

		_putchar(36);
		_putchar(10);
	}
}
