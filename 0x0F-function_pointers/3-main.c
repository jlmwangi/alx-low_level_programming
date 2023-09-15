#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - presents entry information
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int n;
	int j;
	char *operator;
	int (*f)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n = atoi(argv[1]);
	j = atoi(argv[3]);
	operator = (argv[2]);
	f = get_op_func(operator);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*operator == '/' || *operator == '%') && j == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = f(n, j);
	printf("%d\n", result);
	return (0);
}
