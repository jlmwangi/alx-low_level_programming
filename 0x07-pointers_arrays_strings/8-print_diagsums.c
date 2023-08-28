#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of diagonals
 * @a: pointer to the string
 * @size: size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int m = 0;
	int s = 0;

	for (i = 0; i < size; i++)
	{
		m += a[i * size + i];
		s += a[i * size + (size - 1 - 1)];
	}
	printf("%d\n", m);
	printf("%d\n", s);
}
