#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
  */

void print_alphabet_x10(void)
{
	int i = 1;

	for (i = 1; i <= 10; i++)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
	}
	_putchar('\n');
}
