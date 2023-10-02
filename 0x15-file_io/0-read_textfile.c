#include "main.h"
/**
 * read_textfile - reads a textfile
 * @filename: pointer to string
 * @letters: size of character string
 *
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t sz;
	ssize_t wrote;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open("filename", O_RDONLY);

	if (fd < 0)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	sz = read(fd, buffer, letters);
	if (sz < 0)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	wrote = write(STDOUT_FILENO, buffer, sz);

	if (wrote != sz)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);

	return (sz);
}
