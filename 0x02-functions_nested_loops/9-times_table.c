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
			_putchar(x + '0');

				if (x >= 0)
				{
					_putchar(',');
						_putchar(' ');
				}
		}
		_putchar('\n');
	}
}
