#include "lists.h"
/**
 * pop_listint - deletes head node
 * @head: pointer to pointer
 *
 * Return: int
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp = *head;

	if (*head == NULL)
	{
		return (0);
	}

	n = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (n);
}
