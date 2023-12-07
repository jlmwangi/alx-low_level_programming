#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index of a dlistint_t
 * @head: pointer to pointer to dlistint_t
 * @index: unsigned int
 *
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *curr;

	if (*head == NULL)
		return (-1);

	curr = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(curr);
		return (1);
	}
	while (curr != NULL && count < index)
	{
		curr = curr->next;
		count++;
	}
	if (curr == NULL)
		return (-1);

	curr->prev->next = curr->next;
	if (curr->next != NULL)
		curr->next->prev = curr->prev;
	free(curr);
	return (1);
}
