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
