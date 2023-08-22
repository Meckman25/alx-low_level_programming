#include "main.h"

/**
 * _puts - function that prints a new line
 * @str: string to be displayed
 * Return: 0
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
