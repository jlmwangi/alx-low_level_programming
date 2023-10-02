#include "main.h"
/**
 * main - presents entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	FILE *file_from;
	FILE *file_to;
	char buffer[1024];
	size_t read;

	if (argc != 3)
	{
		dprintf("Usage: cp file_from file_to\n", argv[0]);
		exit(97);
	}
	file_from = fopen(argv[1], "rb");
	if (file_from == NULL)
	{
		dprintf("Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = fopen(argv[2], "wb");
	if (file_to == NULL)
	{
		dprintf("Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((read = fread(buffer, 1, sizeof(buffer), file_from)) > 0)
	{
		fwrite(buffer, 1, read, file_to);
	}
	fclose(file_from);
	if (file_from != NULL)
	{
		dprintf("Error: Can't close fd %s\n", argv[1]);
		exit(100);
	}
	fclose(file_to);
	if (file_to != NULL)
	{
		dprintf("Error: Can't close fd %s\n", argv[2]);
		exit(100);
	}
	chmod(argv[2], 0664);
	return (0);
}
