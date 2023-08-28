#include "main.h"
/**
 * _strspn - gets length of prefix substring
 * @s: represents string
 * @accept: string containing accept characters
 *
 * Return: int l
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int l = 0;

	while (*s != '\0' && *accept != '\0' && *accept == *s)
	{
		l++;
		s++;
		accept++;
	}
	return (l);
}
