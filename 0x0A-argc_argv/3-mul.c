#include <stdio.h>
#include <stdlib.h>
/**
 * main - presents entry information
 * @argc: argument count
 * @argv: pointer to array
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	int i = atoi(argv[1]);
	int j = atoi(argv[2]);
	int k;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	{
		(k = i * j);
		printf("%d\n", k);
	}
	return (0);
}
