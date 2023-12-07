#include "lists.h"
/**
 * insert_dnodeint_at_index - insersts new node at a given position
 * @h: pointer to pointer to dlistint_t
 * @idx: unsigned int
 * @n: integer
 *
 * Return: dlistint_t
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *newnode;
	dlistint_t *current;

	if (*h == NULL || h == NULL)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *h;
		(*h)->prev = newnode;
		*h = newnode;
		return (newnode);
	}

	current = *h;
	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = current->next;
	if (current->next != NULL)
		current->next->prev = newnode;
	current->next = newnode;
	newnode->prev = current;

	return (newnode);
}
