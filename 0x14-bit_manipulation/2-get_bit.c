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
	unsigned long int x;
	unsigned int c = sizeof(unsigned long int) * 8;

	if (index >= c)
	{
		return (-1);
	}

	x = 1 << index;
	return ((n & x) >> index);
}
