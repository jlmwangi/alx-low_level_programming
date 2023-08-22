#include "main.h"
/**
 * puts2 - prints every other character
 * @str: represents the string
 *
 * Return: void
 */
void puts2(char *str)
{
	int a;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a += 2;
	}
	_putchar('\n');
}
