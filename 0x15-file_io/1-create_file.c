#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: string to write
 *
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fp;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fp < 0)
		return (-1);
	if (text_content != NULL)
	{
		if (write(fp, text_content, strlen(text_content)) < 0)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);
}
