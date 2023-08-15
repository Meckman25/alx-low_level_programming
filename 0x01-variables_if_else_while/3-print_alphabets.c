#include <stdio.h>

/**
 * main - main fuction begins
 * Return: zero as expected
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'Z' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
