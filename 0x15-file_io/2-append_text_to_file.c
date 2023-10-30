#include "main.h"
/**
 * append_text_to_file - appends text at end of a file
 * @filename: name of the file
 * @text_content: string to add
 *
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	size_t len;
	ssize_t wr;
	int fp;

	if (filename == NULL || text_content == NULL)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp < 0)
		return (-1);

	len = strlen(text_content);
	wr = write(fp, text_content, len);
	if (wr < 0)
	{
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);
}
