#include <stdio.h>
#include <stdlib.h>
/**
 * main - presents entry information
 * @argc: argument count
 * @argv: pointer to string
 *
 * Return: 0 (successful)
 */

int main(int argc, char **argv)
{
	int coins[] = {25, 10, 5, 2, 1};
	int i;
	int count;
	int val;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}

	val = atoi(argv[1]);
	count = 0;

	for (i = 0; i < 5; i++)
	{
		while (val >= coins[i])
		{
			val -= coins[i];
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
