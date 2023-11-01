#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: name of the file to read
 * @letters: number of leters to print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t numred, numwri;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	numred = read(fd, buffer, letters);
	close(fd);
	if (numred == -1)
	{
		free(buffer);
		return (0);
	}
	numwri = write(STDOUT_FILENO, buffer, numred);
	free(buffer);
	if (numred != numwri)
		return (0);
	return (numwri);
}
