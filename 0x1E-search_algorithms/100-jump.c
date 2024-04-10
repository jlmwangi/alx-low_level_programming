#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array
 * @array: pointer to first element in array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: int
 */

int jump_search(int *array, size_t size, int value)
{
	size_t high;
	size_t low;
	size_t m, i;

	if (array == NULL)
		return (-1);

	m = sqrt(size);
	high = size / m;
	low = 0;

	for (i = low; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", low, high);
			printf("Found [%d] at index: [%ld]\n", value, i);
			return (array[i]);
		}
		else if (array[i] < value)
		{
			low = high;
			high = high + size / m;
		}
		else
		{
			while (low <= high)
			{
				if (array[i] == value)
				{
					printf("Found [%d] at index: [%ld]\n", value, i);
					return (array[i]);
				}
			}
		}
	}
	return (-1);
}
