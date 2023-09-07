#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: unsigned int
 * @size: unsigned int
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total = nmemb * size;
	ptr = malloc(total);

	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, total);
	return (ptr);
}
