#include "main.h"
/**
 * print_binary - prints binary representation
 * @n: unsigned long int
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;
	int c;
	int j;

	c = 0;

	for (j = 63; j >= 0; j--)
	{
		i = n >> j;
		if (i & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
		if (!c)
			_putchar('0');
	}
}
