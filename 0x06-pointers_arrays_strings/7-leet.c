#include "main.h"
/**
 * leet - encodes a string into 1337
 *
 * @str: presents string
 *
 * Return: char
 */
char *leet(char *str)
{
	char *leetChars = "AEOTLaeotl";
	char *leetreplacements = "4307143071";
	int i;
	int j;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; leetChars[j]; j++)
		{
			if (str[i] == leetChars[j])
				{
				str[i] = leetreplacements[j];
				}
		}
	}
	return (str);
}

