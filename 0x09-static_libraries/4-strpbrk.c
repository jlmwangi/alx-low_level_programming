#include "main.h"
/**
 * _strpbrk - searches a string
 * @s: represents string
 * @accept: presents characters
 *
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s != '\0')
	{
		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}

