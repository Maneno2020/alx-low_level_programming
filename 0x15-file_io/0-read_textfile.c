#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- To read text file print to STDOUT.
 * @filename: reading text file
 * @letters: numbers of letters to read
 * Return: w- for actual number of bytes to be read and printed
 *        0 when it fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t t;
	ssize_t fd;
	char *buf;
	ssize_t w;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
