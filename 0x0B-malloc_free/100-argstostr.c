#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * argstostr - concatenates all arguments
 * @ac: represents argument count
 * @av: pointer to string array
 *
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	int i;
	size_t len = 0;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 1; i < ac; i++)
	{
		len += strlen(av[i]);
	}

	s = malloc(len + (ac - 1));
	if (s == NULL)
	{
		return (NULL);
	}
	s[0] = '\0';
	for (i = 1; i < ac; i++)
	{
		strcat(s, av[i]);
		if (i < ac - 1)
		{
			strcat(s, "\n");
		}
	}
	return (s);
}
