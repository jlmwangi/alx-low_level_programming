#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: points to the string
 *
 * Return: int
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
		length++;
	return (length);
}
