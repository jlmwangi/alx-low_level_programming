#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: represents destination
 * @src: represents source file
 * @n: presents integer
 *
 *Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
