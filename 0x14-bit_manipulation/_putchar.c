#include "main.h"
#include <unistd.h>

/**
 * _putchar -it write the character c to stdout
 * @c: the character to be printed
 *
 * Return: 1 for success
 * On error: 0 for failure
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
