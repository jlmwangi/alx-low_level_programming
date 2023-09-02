#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string to be checked
 * @needle: string to be checked out for
 *
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
