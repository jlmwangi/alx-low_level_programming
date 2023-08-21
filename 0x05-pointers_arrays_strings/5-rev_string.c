#include "main.h"
/**
 * rev_string - reverses a string
 * @s: points to the string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int l = 0;
	int a;
	char *start, *finish, ch;

	while (s[l] != '\0')
	{
		l++;
	}
	start = s;
	finish = s + l - 1;
	for (a = 0; a < l / 2; a++)
	{
		ch = *finish;
		*finish = *start;
		*start = ch;
		start++;
		finish--;
	}
}

