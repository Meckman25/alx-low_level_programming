#include "main.h"
#include <unistd.h>

/**
 * main - main entry point
 * Return: returns zero on success
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');

}
