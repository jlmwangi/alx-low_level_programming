#include "main.h"

/**
 * _isalpha - checks lowercase or uppercase
 *
 * @c: character to be checked
 *
 * Return: 1(successful)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
