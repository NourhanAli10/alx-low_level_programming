#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: the file name
 * @text_content: NULL terminated string to write to the file
 * Return: the actual number of letters it could read and print
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t fn, wr;
	int len = 0;

	if (filename == NULL)
		return (-1);

	fn = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fn == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		wr = write(fn, text_content, len);
	}

	if (wr == -1)
		return (-1);

	close(fn);

	return (1);
}

