#include "lists.h"
/**
 * free_listint - frees memory allocated
 * @head: pointer to listint_t
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *one;

	while (head != NULL)
	{
		one = head;
		head = head->next;
		free(one);
	}
}
