#include "main.h"
/**
 * cre_buf - creates buffer
 * @filename: name of file
 *
 * Return: char
 */
char *cre_buf(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 256);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buffer);
}
/**
 * closefd - close fds
 * @fd: file descriptor
 */
void closefd(int fd)
{
	int i;

	i = close(fd);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - program entry point
 * @argc: argument count
 * @argv: arguments
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	char *buffer;
	ssize_t rr, wr;
	int from, to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	buffer = cre_buf(argv[2]);
	rr = read(from, buffer, 1024);

	do {
		if (from == -1 || rr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		wr = write(to, buffer, rr);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		rr = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rr > 0);
	free(buffer);
	close(from);
	close(to);
	return (0);
}
