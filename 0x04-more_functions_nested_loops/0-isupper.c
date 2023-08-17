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
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
