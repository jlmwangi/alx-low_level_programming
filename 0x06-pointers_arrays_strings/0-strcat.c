#include "main.h"
/**
 * _strcat - concatenates strings
 * @dest: represents destination
 * @src: represents source
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i + j] = '\0';
	return (dest);
}
