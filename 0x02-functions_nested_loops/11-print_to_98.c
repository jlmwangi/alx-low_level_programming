#include <stdio.h>
/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: presents starting integer
 */
void print_to_98(int n)
{
	int i = n;

	if (i <= 98)
	{
	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		printf(", ");
	}
	}
	else
	{
	for (i = n; i >= 98; i--)
	{
		printf("%d", i);
		printf(", ");
	}
	}
	printf("\n");
}
