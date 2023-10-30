#include "main.h"
/**
 * read_textfile - reads a textfile
 * @filename: pointer to character array
 * @letters: number of letters to read
 *
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp, wr, rr;
	char *buf;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDWR);
	if (fp < 0)
		return (0);

	buf = malloc(letters);

	if (buf == NULL)
	{
		close(fp);
		return (0);
	}
	rr = read(fp, buf, letters);
	if (rr < 0)
	{
		free(buf);
		close(fp);
		return (0);
	}
	wr = write(STDOUT_FILENO, buf, rr);
	if (wr != rr)
	{
		free(buf);
		close(fp);
		return (0);
	}
	free(buf);
	close(fp);
	return (rr);
}
