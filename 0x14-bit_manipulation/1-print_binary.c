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

	c = sizeof(unsigned long int) * 8;

	for (j = c - 1; j >= 0; j--)
	{
		i = 1 << j;

		if (n & i)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
