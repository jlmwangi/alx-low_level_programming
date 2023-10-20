#include "main.h"
char *create_buf(char *file);
void close_file(int fd);

/**
 * create_buf - creates buffer
 * @file: name of the file
 *
 * Return: pointer to buffer
 */
char *create_buf(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buf);
}
/**
 * close - close file descriptors
 * @fd: file descriptor
 */
void close_file(int fd)
{
	int n;

	n = close(fd);
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - presents entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char *buf;
	ssize_t r, w;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	buf = create_buf(argv[2]);
	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	r = read(fd_from, buf, 1024);

	do {
	if (fd_from == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buf);
		exit(98);
	}
	w = write(fd_to, buf, r);
	if (fd_to == -1 || w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buf);
		exit(99);
	}
	r = read(fd_from, buf, 1024);
	fd_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buf);
	close(fd_from);
	close(fd_to);

	return (0);
}
