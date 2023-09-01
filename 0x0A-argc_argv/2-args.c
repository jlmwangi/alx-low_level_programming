#include <stdio.h>
/**
 * main - presents the entry information
 * @argc: argument count
 * @argv: pointer to string
 *
 * Return: 0(successful)
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

