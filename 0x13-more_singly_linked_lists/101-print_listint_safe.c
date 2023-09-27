#include "lists.h"
/**
 * print_listint_safe - prints linked list
 * @head: pointer to pointer to listint_t
 *
 * Return: size_t
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *one = head;
	size_t c = 0;

	while (one != NULL)
	{
		printf("[%p] %d\n", (void *)one, one->n);
		c++;
		one = one->next;
	}
	exit(98);
	return (c);
}
