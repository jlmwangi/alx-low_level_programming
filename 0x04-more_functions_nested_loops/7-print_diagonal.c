#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times\ should be printed.
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 1;

		while (i <= n)
		{
			_putchar('\\');
			_putchar('\n');
			i++;
		}
		_putchar('\n');
	}
}
