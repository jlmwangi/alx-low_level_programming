#include "lists.h"
/**
 * print_dlistint - prints elements of a dlistint_t list
 * @h: pointer to constant dlistint_t
 *
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
