#include "main.h"
/**
 * create_file - creates a file
 * @filename: pointer to a string
 * @text_content: character array
 *
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int wrote;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC | O_EXCL, 0600);
	if (fd < 0)
	{
		if (errno == EEXIST)
		{
			fd = open(filename, O_WRONLY | O_TRUNC);
		}
		else
		{
			return (-1);
		}
	}

	if (text_content != NULL)
	{
		wrote = write(fd, text_content, strlen(text_content));
		if (wrote == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

