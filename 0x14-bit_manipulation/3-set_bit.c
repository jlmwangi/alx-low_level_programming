#include "main.h"
/**
 * set_bit - sets value of a bit to 1
 * @n: unsigned long int
 * @index: unsigned int
 *
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	i = 1UL << index;
	*n = *n | i;

	return (1);
}
