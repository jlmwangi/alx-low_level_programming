#include "main.h"
/**
 * clear_bit - sets value of a bit to 0
 * @n: unsigned long int
 * @index: unsigned int
 *
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	i = ~(1UL << index);
	*n = *n & i;

	return (1);
}
