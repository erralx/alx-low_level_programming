#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		int H = h / 10;
		int Hh = h % 10;

		for (m = 0; m < 60; m++)
		{
			int M = m / 10;
			int Mm = m % 10;

			_putchar(48 + H);
			_putchar(48 + Hh);
			_putchar(58);
			_putchar(48 + M);
			_putchar(48 + Mm);

			_putchar(10);
		}
	}
}
