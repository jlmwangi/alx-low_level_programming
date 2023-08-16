#include "main.h"
/**
 * times_table - prints the 9 times table
 * Return: (void)
 */
void times_table(void)
{
	int i;
	int n;
	int x;

	for (i = 0; i <= 9; ++i)
	{
		_putchar('0');

			for (n = 1; n <= 9; ++n)
			{
				_putchar(',');
				_putchar(' ');

				x = (i * n);

				if (x <= 9)
					_putchar(' ');
				else
					_putchar((x / 10) + '0');

				_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}
