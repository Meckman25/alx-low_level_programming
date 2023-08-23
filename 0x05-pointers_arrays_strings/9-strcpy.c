#include "main.h"

/**
 * char *_strcpy - copies the string printed to source
 * @dest: destination of file
 * @src: source of the file
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
