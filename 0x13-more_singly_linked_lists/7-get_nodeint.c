#include "lists.h"
/**
 * get_nodeint_at_index - returns nth node
 * @head: pointer to listint_t
 * @index: index of the node
 *
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *one = head;
	unsigned int c = 0;

	while (one != NULL)
	{
		if (c == index)
		{
			return (one);
		}
		c++;
		one = one->next;
	}
	return (NULL);
}
