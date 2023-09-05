#include <stdlib.h>
#include "main.h"
/**
 * create_array - pointer to an array of characters
 * @size: represents integer
 * @c: represents character
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *create_array;

	create_array = malloc(sizeof(char) * size);

	if (create_array == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		create_array[i] = c;
	}
	return (create_array);
}
