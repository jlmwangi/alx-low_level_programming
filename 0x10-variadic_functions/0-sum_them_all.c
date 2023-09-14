#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - returns sum of parameters
 * @n: constant unsigned int
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list x;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(x, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(x, int);
	}
	va_end(x);
	return (sum);
}
