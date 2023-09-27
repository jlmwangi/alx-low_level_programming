#include "lists.h"
/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to pointer to struct
 *
 * Return: size_t
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *one = *h;
	size_t c = 0;

	while (one != NULL)
	{
		listint_t *temp = one;
		one = one->next;
		free(temp);
		c++;
	}

	*h = NULL;
	return (c);
}
