#include "lists.h"
/**
 * sum_dlistint - returns sum of all the data
 * @head: pointer to dlistint_t
 *
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
