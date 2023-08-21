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
		_putchar(*str);
		if (*str == '\n')
		_putchar('\n');
		str++;
	}
}

