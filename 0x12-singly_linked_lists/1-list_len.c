#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns number of elements
 * @h: pointer to a constant structure
 *
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t c = 0;
	const list_t *one = h;

	while (one != NULL)
	{
		c++;
		one = one->next;
	}
	return (c);
}
