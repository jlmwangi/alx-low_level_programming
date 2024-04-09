#include "search_algos.h"

/**
 * binary_search - searches for a val using binary search algorithm
 * @array:pointer to first element of array
 * @size: number of elements
 * @value: value to search for
 *
 * Return: int
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, low, mid, high;

	if (array == NULL)
		return (-1);

	high = size - 1;
	low = 0;
	while (low <= high)
	{
		mid = low + (high - low) / 2;

		printf("searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d ", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
