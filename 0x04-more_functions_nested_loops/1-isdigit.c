#include "main.h"

/**
 * _isdigit -  checks for a digit
 * @c: is a parameter for checking the condition
 * Return: displays 1 on success and 0 on failure
 *
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
