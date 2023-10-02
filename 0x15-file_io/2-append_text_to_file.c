#include "main.h"
/**
 * append_text_to_file - append text at end of a file
 * @filename: pointer to character array
 * @text_content: pointer to string
 *
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int wrote;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
	{
		if (errno == ENOENT)
		{
			return (-1);
		}
		else if (errno == EACCES)
		{
			return (-1);
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
