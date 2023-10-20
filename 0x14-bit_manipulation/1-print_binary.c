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

	c = 1;

	for (j = 63; j >= 0; j--)
	{
		i = 1UL << j;
		if (i & n)
		{
			c = 0;
			_putchar('1');
		}
		else if (!c)
			_putchar('0');
	}
}
