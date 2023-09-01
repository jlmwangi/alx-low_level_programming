#include <stdio.h>
#include "main.h"
/**
 * main - presents the entry point
 * @argc: argument count
 * @argv: pointer to the strings
 *
 * Return: 0(successful)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
