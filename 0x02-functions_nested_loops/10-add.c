#include "main.h"
/**
 * add - adds two integers
 *
 * @a: represents integers
 *
 * @b: represents integers
 *
 * Return: integer
 */
int add(int a, int b)
{
	int x;

		for (a = 0; a > 0; a++)
			if (a > 0)
				_putchar(a);
			else if (a < 0)
				_putchar(a);
			else
				_putchar(0);
		for (b = 0; b > 0; b++)
			if (b > 0)
				_putchar(b);
			else if (b < 0)
				_putchar(b);
			else
				_putchar(0);
		x =(a + b);
			_putchar(x + '0');
			_putchar('\n');
		return (x);
}
