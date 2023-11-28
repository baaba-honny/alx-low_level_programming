#include "main.h"
/**
*	read_textfile - reads a text file and prints it to the POSIX standard output.
*	@filename: name of file
*	@letters: number of letters
*	Return: _write - actual number of letters read and printed
*	0 if function fails
*/
	ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t _fd;
	ssize_t _read;
	ssize_t _write;
	char *buffer;

	_fd = open(filename, O_RDONLY);
	if (_fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	_read = read(_fd, buffer, letters);
	_write = write(STDOUT_FILENO, buffer, _read);

	free(buffer);
	close(_fd);
	return (_write);
}
