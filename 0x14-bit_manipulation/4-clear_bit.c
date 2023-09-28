#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer to unsigned long int
 * @index: unsigned int
 *
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;
	unsigned int c;

	c = sizeof(unsigned long int) * 8;

	if (index < c)
	{
		x = 1 << index;
		*n = *n & ~x;
		return (1);
	}
	else
	{
		return (-1);
	}
}
