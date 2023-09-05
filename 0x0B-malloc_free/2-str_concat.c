#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * str_concat - chains two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	char *new;

	new = malloc(len1 + len2 + 1);

	if (new == NULL)
	{
		return (NULL);
	}
	strcpy(new, s1);
	strcat(new, s2);
	return (new);
}
