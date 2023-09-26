#include "lists.h"
/**
 * print_listint - prints all elements of a struct
 * @h: pointer to struct listint_t
 *
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;
	const listint_t *one = h;

	while (one != NULL)
	{
		printf("%d\n", one->n);
		one = one->next;
		c++;
	}
	return (c);
}
