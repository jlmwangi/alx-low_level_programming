#include <stdio.h>
/**
 * main - presents the entry point
 *
 * Return: 0 (successful)
 */
int main(void)
{
	char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			if (ch != 'e' && ch != 'q')
			{
				putchar(ch);
			}
		}
	putchar('\n');
	return (0);
}
