#include "main.h"
/**
 * print_most_numbers - omits 2 and 4
 *
 * return: void
 */
void print_most_numbers(void)
{
	int i;

	i = 0;
		while (i <= 9)
		{
			if (i != 2 || i != 4)
			{
				_putchar(i + '0');
			}
			i++;
		}
}
