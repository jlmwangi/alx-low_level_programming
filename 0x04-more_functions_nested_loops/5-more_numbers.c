#include "main.h"
/**
 * more_numbers - prints ten times the numbers
 *
 * return: void
 */
void more_numbers(void)
{
	int i;
	int x;

	for (i = 0; i <= 9; i++)
	{
		x = 0;
		while (x <= 14)
		{
			if (x > 9)
			{
			_putchar(x / 10 + '0');
			}

			_putchar(x % 10 + '0');
			x++;
		}
		_putchar('\n');
	}
}

