#include "main.h"
/**
 * set_bit - sets the value of a bit to 1
 * @n: pointer to unsigned long int
 * @index: unsigned int
 *
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int c;
	unsigned long int x;

	c = sizeof(unsigned long int) * 8;
	if (index < c)
	{
		x = 1 << index;
		*n |= x;
		return (1);
	}
	else
	{
		return (-1);
	}
}
