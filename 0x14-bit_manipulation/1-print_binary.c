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

	for (i = 1 << 31; i > 0; i >>= 1)
	{
		(n & i) ? _putchar('1') : _putchar('0');
	}
	_putchar('\n');
}
