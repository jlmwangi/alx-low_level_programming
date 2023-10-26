#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: character string
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n, j, k;
	int i;

	n = 1;
	j = 0;
	k = strlen(b);

	if (b == NULL)
		return (0);

	for (i = k - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			j += n;
		}
		n *= 2;
	}
	return (n);
}
