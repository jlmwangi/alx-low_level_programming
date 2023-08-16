#include "main.h"

/**
 * isalpha - checks lowercase or uppercase
 * @c: character to be checked
 *
 * Return: 1(successful)
 */

int _isalpha(int c)
{
	if (c >= 65 || c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
