#include "main.h"
/**
 * _is_prime_number - check if is prime nmber
 * @n: integer
 *
 * Return: int
 */
int _is_prime_number(int n)
{
	int i;

	i = 0;
	if (i <= n)
	{
		i++;
	}
	if (n <= 1)
	{
		return (0);
	}
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (n);
}
