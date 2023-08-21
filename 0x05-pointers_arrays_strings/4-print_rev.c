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
	int a;
	char *start, *finish, ch;

	while (s[l] != '\0')
	{
		l++;
	}

	start = s;
	finish = s;
	for (a = 0; a < l / 2; a++)
	{
		ch = *finish;
		*finish = *start;
		*start = ch;
		start++;
		finish--;
	}
	_putchar('\n');
}

