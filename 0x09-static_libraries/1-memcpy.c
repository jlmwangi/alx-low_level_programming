#include "main.h"
/**
 * *_memcpy - copies memory area
 * @dest: destination file
 * @src: source folder
 * @n: integer holding memory area
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
