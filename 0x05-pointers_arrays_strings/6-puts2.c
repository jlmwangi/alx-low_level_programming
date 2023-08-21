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

	for (a = 0; str[a] != '\0'; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
