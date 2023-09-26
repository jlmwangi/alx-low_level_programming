#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node
 * @head: pointer to pointer to listint_t
 * @idx: index of the list
 * @n: integer
 *
 * Return: listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		listint_t *one = *head;

		for (i = 0; i < idx - 1 && one != NULL; i++)
		{
			one = one->next;
		}
		newnode->next = one->next;
		one->next = newnode;
	}
	return (newnode);
}
