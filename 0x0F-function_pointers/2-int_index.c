#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for integer
 * @array: pointer to array
 * @size: size of array
 * @cmp: comparison function pointer
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	i = 0;
	while (i < size)
	{
		if (cmp(array[i]))
		{
			return (i);
			i++;
		}
	}
	return (-1);
}
