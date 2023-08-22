#include <unistd.h>

/**
 * _putchar -displays the character c to stdout
 * @c: This is the char to print
 *
 * Return: 1 on success
 * -1 is returned on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
