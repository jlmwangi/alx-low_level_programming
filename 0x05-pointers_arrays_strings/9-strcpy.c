#include "main.h"
/**
 * *_strcpy - copies the string pointed to by str
 * @dest: pointer to the destination
 * @src: string to be copied
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	dest++;
	src++;
	}
	dest[i] = '\0';
	return (dest);
}
