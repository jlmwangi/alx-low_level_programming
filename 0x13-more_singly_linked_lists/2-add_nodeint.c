#include "lists.h"
/**
 * add_nodeint - adds node at the beginning
 * @n: constant integer
 * @head: pointer to pointer
 *
 * Return: node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
