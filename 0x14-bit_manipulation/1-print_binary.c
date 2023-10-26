#include "main.h"
/**
 * print_binary - prints binary representation
 * @n: long int
 */
void print_binary(unsigned long int n)
{
	int i;
	int s;
	unsigned long int j;

	s = sizeof(unsigned long int) * 8;

	if (n == 0)
		_putchar('0');

	else
	{
		for (i = s - 1; i >= 0; i--)
		{
			j = 1UL << i;
			if (n & j)
			{
				_putchar('1');
			}
			else if (!n)
				_putchar('0');
		}
	}
}
