#include "main.h"
/**
 * _puts - prints string to stdout
 * @str: points to the string
 *
 * return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		if (*str == '\n')
		_putchar(*str);
	}
	_putchar('\n');
}

