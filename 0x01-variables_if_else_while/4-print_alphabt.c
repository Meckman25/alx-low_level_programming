#include <stdio.h>

/**
 * main - main function begins here
 *
 * Return: assume output to be zero
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
