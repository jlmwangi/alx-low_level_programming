#include "main.h"
/**
 * _isupper - checks for uppercase character
 *
 * @c: represents integer
 *
 * Return: 1(successful), 0(otherwise)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		_putchar(1);
	else
		_putchar(0);
	return (1);
}
