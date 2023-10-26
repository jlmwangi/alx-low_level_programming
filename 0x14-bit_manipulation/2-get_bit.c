#include "main.h"
/**
 * get_bit - returns value of a bit
 * @n: unsigned long int
 * @index: unsigned int
 *
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	i = 1UL << index;

	return ((n & i) ? 1 : 0);
}
