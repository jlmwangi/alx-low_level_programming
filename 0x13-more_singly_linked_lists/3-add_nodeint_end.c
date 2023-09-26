#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end
 * @head: pointer to pointer
 * @n: constant integer
 *
 * Return: node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *one = *head;

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (one->next != NULL)
		{
			one = one->next;
		}
		one->next = newnode;
	}
	return (newnode);
}

