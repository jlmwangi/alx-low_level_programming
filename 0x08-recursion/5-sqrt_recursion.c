#include "main.h"
/**
 * _sqrt_recursion - returns natural square root
 * @n: presents integer
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int x;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	x = _sqrt_recursion(n - 1);

	return ((x + n / x) / 2);
}
