#include <stdio.h>
/**
 * main - presents entry information
 * @argc: argument count
 * @argv: pointer to strings
 *
 * Return: 0(successful)
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
