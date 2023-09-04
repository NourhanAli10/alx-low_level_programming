#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: the file name
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fn, re, wr;
	char *c;

	if (filename == NULL)
		return (0);
	fn = open(filename, O_RDONLY);

	if (fn == -1)
		return (0);

	c = malloc(sizeof(char) * letters);
	re = read(fn, c, letters);

	wr = write(STDOUT_FILENO, c, re);

	if (wr == -1)
		return (0);

	close(fn);
	return (wr);
}

