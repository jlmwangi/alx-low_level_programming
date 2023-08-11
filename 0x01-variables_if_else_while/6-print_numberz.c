#include <stdio.h>
/**
 * main - presents entry information
 *
 * Return: 0 (successful)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}

