#include "main.h"
/**
 * puts_half - prints half the string
 * @str: points to the string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int n = 0;
	int x;
	int i;

	while (str[n] != '\0')
	{
		n++;
	}

	if (n % 2 == 0)
	{
		x = n / 2;
	}
	else
	{
		x = (n - 1) / 2;
	}

	for (i = x; i < n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}


