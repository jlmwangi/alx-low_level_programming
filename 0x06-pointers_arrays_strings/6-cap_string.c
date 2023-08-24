#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: presents the string
 *
 * Return: points to the string address
 */
char *cap_string(char *str)
{
	int i = 0;
	int j;
	char a[] = " \t\n,;.!?"(),{}";

	while(*(str + i))
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			if (i == 0)
				*(str + i) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(str + i - 1))
						*(str + i) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (str);
}
