#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end
 * @head: end of the new list
 * @str: pointer to a string array
 *
 * Return: list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		exit(EXIT_FAILURE);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		exit(EXIT_FAILURE);
	}
	new->len = strlen(str);

	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
	return (new);
}
