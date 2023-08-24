#include "main.h"
/**
 * *string_toupper - changes lowercase to uppercase
 * char *: represents character
 * @str: points to string
 *
 * * Return: point to modified string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
	return (str);
}

