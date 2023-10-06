#include "main.h"
#define BUFFER_SIZE 1024
#include "main.h"
/**
 * exit_with - function to determine what to print if error
 * @exit_no: number of the error
 * @message: error meassage to print
 * @filename: name of the file
 * @fd: filedesciptor number
 */
void exit_with(int exit_no, const char *message, const char *filename, int fd)
{
	if (fd == -1)
		dprintf(STDERR_FILENO, message, filename);
	else
		dprintf(STDERR_FILENO, message, fd);
	exit(exit_no);
}

/**
 * main - copies content of a file to another file
 * @argc: argments count
 * @argv: array of pointer to the arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read;
	char buffer[BUFFER_SIZE];
	char *file_from = argv[1];
	char *file_to = argv[2];
	struct stat st;

	if (argc != 3)
		exit_with(97, "Usage: cp file_from file_to\n", "", 0);

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		exit_with(98, "Error: Can't read from file %s\n", file_from, fd_from);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 664);
	if (fd_to == -1)
		exit_with(99, "Error: Can't write to file %s\n", file_to, fd_to);

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(fd_to, buffer, bytes_read) != bytes_read)
		{
			exit_with(99, "Error: Can't write to file %s\n", file_to, fd_to);
		}
	}

	if (bytes_read == -1)
		exit_with(99, "Error: Can't read from file %s\n", file_to, fd_to);

	if (close(fd_from) == -1)
		exit_with(100, "Error: Can't close fd %d\n", file_from, fd_from);

	if (close(fd_to) == -1)
		exit_with(100, "Error: Can't close fd %d\n", file_to, fd_to);
	if (stat(file_from, &st) == -1)
		exit_with(99, "Error: Can't read permissions from file %s\n", file_from, -1);
	if (chmod(file_to, st.st_mode) == -1)
		exit_with(99, "Error: Can't set permissions to file %s\n", file_to, -1);
	return (0);
}

