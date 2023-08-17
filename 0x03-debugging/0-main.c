#include "main.h"

/**
 * * main - tests function that prints if integer is positive or negative
 * * Return: 0
 */

int main(void)
{
	int i;

		i = 98;
		printf("%d is %s\n", i, (i > 0) ? "positive" : (i < 0) ? "negative" : "zero");

		return (0);
}
