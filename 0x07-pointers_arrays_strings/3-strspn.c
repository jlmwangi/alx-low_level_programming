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
	int l = 0;

	while (*s != '\0' && *accept != '\0' && *s == *accept)
	{
		l++;
		s++;
		accept++;
	}
	return (l);
}
