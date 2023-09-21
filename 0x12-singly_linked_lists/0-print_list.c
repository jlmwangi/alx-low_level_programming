#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints elements of a list
 * @h: pointer to constant struct
 *
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t c = 0;
	const list_t *one = h;

	while (one != NULL)
	{
		if (one->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", one->len, one->str);
		}
		one = one->next;
		c++;
	}
	return (c);
}
