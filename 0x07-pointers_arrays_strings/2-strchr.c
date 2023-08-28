#include "main.h"
/**
 * _strchr - locates a character in string
 * @s: string
 * @c: character
 *
 * Return: s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
