#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: smallest integer
 * @max: largest integer
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc((max - min + 1) * sizeof(*ptr));
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i <= max - min)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}

