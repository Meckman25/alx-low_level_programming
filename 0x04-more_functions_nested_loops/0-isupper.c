#include "main.h"
/**
 * _isupper - this functiom checks for the uppercase of a character
 * @c: this is the function parameter
 * Return: one  on success and zero on failure
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
