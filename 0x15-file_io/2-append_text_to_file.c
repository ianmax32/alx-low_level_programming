#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - function appends text to the end of the file
 * @filename:the name of the files to be read
 * @text_content:info to be added in the file
 * Return:0
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fileDe
	size_t size;

	if (filename == NULL)
		return (-1);

	fileDes = open(filename, O_RDWR | O_APPEND);
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

	write(fileDes, text_content, size);
	close(fileDes);
	return (1);
}
