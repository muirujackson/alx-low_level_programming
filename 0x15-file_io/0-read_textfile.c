#include "main.h"

/**
 * read_textfile - function to read file
 * @filename: the name of the file
 * @letters: the number of letter to be read
 *
 * Return: ssize
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer = malloc(sizeof(char) * letters);
	ssize_t read_bytes;

	if (filename == NULL || buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	read_bytes = read(fd, buffer, letters);
	if (read_bytes != -1)
		dprintf(STDOUT_FILENO, "%s", buffer);
	else
	{
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (read_bytes);
}




