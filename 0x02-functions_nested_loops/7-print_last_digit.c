#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 *
 * int: represents the integer
 * @n: presents the digit
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int a;
	{
		n = n <= 00 ? n : -n;
		a = n % 10;

		_putchar(a + '0');
	}
	return (a);
}
