#include "main.h"
/**
 * read_textfile - reads a textfile and prints it to standard output
 * @filename: file to be read
 * @letters: number of letters it should read and print
 * Return: numbers of letters that it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t write_bytes, read_bytes;
	FILE *file;
	char *buffer;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");

	if (file == NULL)
		return (0);

	buffer = malloc(letters + 1);

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	read_bytes = fread(buffer, sizeof(char), letters, file);

	if (read_bytes < 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	buffer[read_bytes] = '\0';
	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);

	if (write_bytes < 0 || write_bytes != read_bytes)
	{
		fclose(file);
		free(buffer);
		return (0);
	}

	fclose(file);
	free(buffer);
	return (read_bytes);
}
