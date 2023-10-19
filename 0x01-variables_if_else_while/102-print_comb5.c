#include <stdio.h>
/**
 * main - entry point
 * Return: int
 */
int main(void)
{
	int a = 00;
	int b = 99;
	int i;
	int j;

	for (i = a; i <= b; i++)
	{
		j = i + 1;
		while (j <= b)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			if (i != b - 1 || j != b)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
	}
	putchar('\n');
	return (0);
}
