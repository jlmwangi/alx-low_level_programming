#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase
 *
 * Return: 0(successful)
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
