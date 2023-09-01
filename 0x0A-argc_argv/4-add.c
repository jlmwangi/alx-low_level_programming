#include <stdio.h>
#include <stdlib.h>
/**
 * main - presents entry information
 * @argc: argument count
 * @argv: pointer to array
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;
	long j;
	int k = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		char *endptr;

		j = strtol(argv[i], &endptr, 10);
		if (*endptr != '\0' || j <= 0)
		{
			printf("Error\n");
			return (1);
		}
	k += j;
	}
	printf("%d", k);
	return (0);
}
