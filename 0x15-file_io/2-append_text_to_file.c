#include "main.h"
/**
 * _strlen - For displaying length of the string
 * @s: String
 * Return: display length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * append_text_to_file - for appending text at the end of a file.
 * @filename: file name
 * @text_content: Text
 * Return: 1 - to show Success, -1 to show failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	unsigned int length;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	length = _strlen(text_content);

	bytes_written = write(fd, text_content, length);
	if (bytes_written == -1)
		return (-1);
	close(fd);
	return (1);
}
