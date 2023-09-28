#include "main.h"
/**
 * binary_to_uint - binary to unsigned int
 * @b: pointer to a string
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int j = 1;
	unsigned int k = 0;
	int n;
	unsigned int len;

	len = strlen(b);

	if (b == NULL)
		return (0);

	for (n = len - 1; n >= 0; n--)
	{
		if (b[n] != '0' && b[n] != '1')
			return (0);
		if (b[n] == '1')
		{
			k += j;
		}
		j *= 2;
	}
	return (k);
}
