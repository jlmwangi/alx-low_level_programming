#include "main.h"
# include <stdio.h>
/**
 * main - prints fizz and buzz
 *
 * Fizz: characters to be printed
 * Buzz: characters to be printed
 * FizzBuzz: characters to be printed
 *
 * Return: 0(successful)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}

		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i != 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

