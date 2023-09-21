#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a new node at the beginning
 * @head: pointer to struct pointer
 * @str: string constant
 *
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
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
	new->next = *head;
	*head = new;
	return (new);
}
