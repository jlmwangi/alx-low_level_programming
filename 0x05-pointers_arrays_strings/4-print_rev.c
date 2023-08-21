#include "main.h"
/**
 * print_rev - prints a function in revers
 * @s: points to the stringe
 *
 * return: void
 */
void print_rev(char *s)
{
	int l = 0;
	int a = l - 1;

	while (s[l] != '\0')
	{
		l++;
	}

	for (a = l - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}

