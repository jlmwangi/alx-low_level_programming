#include "main.h"
/**
 * _strcmp - compares strings
 * @s1: string being compared
 * @s2: string to compare with
 *
 * Return: int less than, equal to or greater than 0
 * if s1 is found to be less than, equal to or
 * greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (s1[i] == '\0' && s2[i] != '\0')
		return (-1);
	else if (s1[i] != '\0' && s2[i] == '\0')
		return (1);
	else
		return (0);
}
