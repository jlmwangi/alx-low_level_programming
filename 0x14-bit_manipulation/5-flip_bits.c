#include "main.h"
/**
 * flip_bits - returns number of bits flipped
 * @n: unsigned long int
 * @m: unsigned long int
 *
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	unsigned int c;

	x = n ^ m;
	c = 0;

	while (x)
	{
		x = x & (x - 1);
		c++;
	}
	return (c);
}
