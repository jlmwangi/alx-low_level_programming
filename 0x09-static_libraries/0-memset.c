#include "main.h"
/**
 * _memset - fills a block of memory
 * @n: represents integer
 * @s: represents pointer
 * @b: represents character
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
