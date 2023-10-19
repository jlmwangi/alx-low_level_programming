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
	int k = 0;

	while (i <= n)
	{
		j = i + 1;
		while (j <= n)
		{
			k = j + 1;
			while (k <= n)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i < n - 2 || j < n - 1 || k < n)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
