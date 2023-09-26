#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to pointer
 * @index: index of the node that should be deleted
 *
 * Return: int;
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		temp->next = NULL;
		free(temp);
		return (1);
	}
	else
	{
		listint_t *prev = NULL;

		for (i = 0; i < index; i++)
		{
			if (temp == NULL)
			{
				return (-1);
			}
			prev = temp;
			temp = temp->next;
		}
		if (temp != NULL)
		{
			prev->next = temp->next;
			temp->next = NULL;
			free(temp);
			return (1);
		}
		else
		{
			return (-1);
		}
	}
}


