#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * *_strdup - duplicates strings
 *
 * @str: pointer to string array
 * Return: pointer to newstring otherwise NULL
 */
char *_strdup(char *str)
{
	char *newstring;
	size_t len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	newstring = malloc(len + 1);

	if (newstring == NULL)
	{
		return (NULL);
	}
	strcpy(newstring, str);
	return (newstring);
}
