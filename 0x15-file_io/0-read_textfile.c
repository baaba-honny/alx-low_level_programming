#include "main.h"
/**
*	read_textfile - reads a text file and prints it to the POSIX standard output.
*	@filename: name of file
*	@letters: number of letters
*	Return: actual number of letters
*/
	ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_des;
	size_t _read, _write;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_des = open(filename, O_RDONLY);

	if (file_des == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_des);
		return (0);
	}
	_read = read(file_des, buffer, letters);
	close(file_des);
	if (_read == -1)
	{
		free(buffer);
		return (0);
	}
	_write = write(STDOUT_FILENO, buffer, _read);
	free(buffer);
        if (_read != _write)
        return (0);
	return (_write);
}
