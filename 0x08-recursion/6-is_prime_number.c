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

	if (n <= 1)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (_is_prime_number(n, i + 1));
}
