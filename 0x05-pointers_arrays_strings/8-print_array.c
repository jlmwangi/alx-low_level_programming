#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array
 * @a: points to the integer n
 * @n: refers to the integer
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
