#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - function reads a test file and prints it
 * to the POSIX standard output
 * @filename:the name of the files to be read
 * @letters:letters in the file
 * Return:0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDes;
	char *buf;
	ssize_t size;

	if (filename == NULL)
		return (0);

	fileDes = open(filename, O_RDONLY);
	if (fileDes == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	size = read(fileDes, buf, letters);
	if (size != -1)
	{
		write(STDOUT_FILENO, buf, size);
		close(fileDes);
		free(buf);
		return (size);
	}

	close(fileDes);
	free(buf);
	return (0);
}
