#include "main.h"
/**
 * get_endianness - checks endianness
 *
 * Return: int
 */
int get_endianness(void)
{
	char *s;
	int n;

	s = (char *)&n;
	n = 1;

	if (*s == 1)
		return (1);
	else
		return (0);
}
