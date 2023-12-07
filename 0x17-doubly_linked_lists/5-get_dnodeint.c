#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t
 * @head: pointer to dlistint_t
 * @index: unsigned int
 *
 * Return: dlistint_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
