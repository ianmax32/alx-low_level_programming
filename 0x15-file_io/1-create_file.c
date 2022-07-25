#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - function creates a file
 * @filename:the name of the files to be read
 * @text_content:info to be added in the file
 * Return:0
 */

int create_file(const char *filename, char *text_content)
{
	int fileDes;
	int error;
	size_t size;

	if (filename == NULL)
		return (-1);

	fileDes = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (fileDes == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fileDes);
		return (1);
	}

	size = 0;
	while (text_content)
	{
		size++;
	}

	error = write(fileDes, test_content, size);
	if (error == -1)
		return (-1);
	close(fileDes);
	return (1);
}
