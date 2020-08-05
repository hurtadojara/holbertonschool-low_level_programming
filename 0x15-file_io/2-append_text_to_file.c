#include "holberton.h"
/**
 * append_text_to_file - appends text
 * @filename: name
 * @text_content: file content
 * Return: 0 on succes -1 if not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	mode_t m = O_WRONLY | O_APPEND;
	ssize_t w_write;

	if (!filename)
		return (-1);

	fd = open(filename, m);
	if (!fd)
		return (-1);
	if (text_content)
	{
		w_write = write(fd, text_content, strlen(text_content));
		if (w_write == -1)
		{
			return (-1);
		}
		close(fd);
	}
	else
	{
		close(fd);
		return (1);
	}
	close(fd);
	return (1);
}
