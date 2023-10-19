#include <stdio.h>
/**
 * main - entry point
 * Return: int
 */

int main(void)
{
	int n = 9;
	int i = 0;
	int j = 0;

	while (i <= n)
	{
		j = i + 1;
		while (j <= n)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i < n - 1 || j < n)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
