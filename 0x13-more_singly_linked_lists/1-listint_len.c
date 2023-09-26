#include "lists.h"
/**
 * listint_len - returns number of elements
 * @h: pointer to struct
 *
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t c = 0;
	const listint_t *one = h;

	while (one != NULL)
	{
		c++;
		one = one->next;
	}
	return (c);
}
