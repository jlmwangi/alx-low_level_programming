#include "lists.h"
/**
 * free_dlistint - frees a dlistint list
 * @head: pointer to dlistint_t
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;
	dlistint_t *current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
