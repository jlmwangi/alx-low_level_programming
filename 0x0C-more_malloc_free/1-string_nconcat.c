#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * string_nconcat - concatenate two strings
 * @s1: pointer to characters
 * @s2: pointer too characters
 * @n: unsigned integer
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1 = (s1 != NULL) ? strlen(s1) : 0;
		size_t len2 = (s2 != NULL) ? strlen(s2) : 0;
		char *ptr;

		if (s1 == NULL)
		{
			s1 = "";
		}
		if (s2 == NULL)
		{
			s2 = "";
		}

		ptr = malloc(len1 + ((n < len2) ? n : len2) + 1);

		if (ptr == NULL)
		{
			return (NULL);
		}
		strncpy(ptr, s1, len1);
			if (n >= len2)
			{
				strcpy(ptr + len1, s2);
			}
			else
			{
				strncpy(ptr + len1, s2, n);
			}
		ptr[len1 + ((n < len2) ? n : len2)] = '\0';
		return (ptr);
}
