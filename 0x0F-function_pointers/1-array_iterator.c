#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function on each element
 * @array: an array of pointers
 * @size: size of the array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	
	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
