#include "main.h"
#include <stdio.h>

/**
 * print_array - this function prints the element of an array of int
 * @a: array to be printed
 * @n: number of elements
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
