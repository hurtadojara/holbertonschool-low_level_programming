#include "holberton.h"
/**
 * read_textfile - reads a text and displays to stdout
 * @filename: path
 * @letters: # of letters
 * Return: a ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t chars, verify;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		free(buffer);
		return (-1);
	}
	chars = read(fd, buffer, letters);
	if (chars == -1)
	{
		free(buffer);
		return (0);
	}
	verify = write(STDOUT_FILENO, buffer, chars);
	if (verify == -1)
	{
		free(buffer);
		return (0);
	}
	if (verify != chars)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (verify);
}
