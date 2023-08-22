#include "main.h"

/**
 * swap_int - swaps the position of two int
 * @a: 1 int to be swaped
 * @b: 2 int to be swaped
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
