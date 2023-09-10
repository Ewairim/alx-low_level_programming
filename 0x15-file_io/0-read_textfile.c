#include "main.h"
/**
 * read_textfile - reads a textfile and prints it to standard output
 * @filename: file to be read
 * @letters: number of letters it should read and print
 * Return: numbers of letters that it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_bytes;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = (char *)malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	read_bytes = read(fd, buffer, letters);
	if (read_bytes < 0)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	buffer[read_bytes] = '\0';
	write(STDOUT_FILENO, buffer, read_bytes);
	close(fd);
	free(buffer);
	return (read_bytes);
}
