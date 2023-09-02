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
	int i = 0;

	while (src[i] != '\0')
	{
	dest[i] = src[i];
	dest++;
	src++;
	}
	dest = '\0';
	return (dest);
}
