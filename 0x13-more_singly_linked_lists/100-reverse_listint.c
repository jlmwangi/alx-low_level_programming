#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to pointer
 *
 * Return: listint_t
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr = *head;
	listint_t *prev = NULL;

	while (curr != NULL)
	{
		listint_t *temp = curr->next;

		curr->next = prev;
		prev = curr;
		curr = temp;
	}
	*head = prev;
	return (prev);
}
