#include "main.h"
/**
 * flip_bits - returns number of bits to flip
 * @n: unsigned long int
 * @m: unsigned long int
 *
 * Return: unsigned long int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int r;
	unsigned int c;

	r = n ^ m;
	c = 0;

	while (r != 0)
	{
		r = r & (r - 1);
		c++;
	}
	return (c);
}
