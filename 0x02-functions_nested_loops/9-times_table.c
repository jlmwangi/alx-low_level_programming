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
		for (n = 0; n <= 9; ++n)
		{
			x = (i * n);

			if (n > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			_putchar((x % 10) + '0');
			_putchar((x / 10) + '0');
		}
		_putchar('\n');
	}
}
