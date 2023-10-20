#include "main.h"
/**
 * print_binary - prints binary representation
 * @n: unsigned long int
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	char s;
	int c;
	int j;

	c = sizeof(unsigned long int) * 8;

	for (j = c - 1; j >= 0; j--)
	{
		s = ((n >> j) & 1) + '0';
		putchar(s);
	}
	putchar('\n');
}
