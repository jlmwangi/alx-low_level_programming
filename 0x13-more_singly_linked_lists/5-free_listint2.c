#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to pointer to listint_t
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *one;

	while (*head != NULL)
	{
		one = *head;
		*head = (*head)->next;
		free(one);
	}
	*head = NULL;
}
