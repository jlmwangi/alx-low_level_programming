#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 *
 * int: represents the integer
 * @n: presents the digit
 *
 * Return: 0(successful)
 */
int print_last_digit(int n)
{
	{
		n = n >= 0 ? n : -n;
	}

	{
		return (n % 10 + '0');
	}
	return (0);
}
