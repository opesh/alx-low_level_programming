#include "main.h"
#include <stdio.h>

/**
 * print_array - this code prints n element of an array of integers,
 * followed by a new line
 * @p: array to be printed
 * @n: number of elements to be printed
 */

void print_array(int *p, int n)
{
	int q;

	for (q = 0; q < n; q++)
		if (q != n - 1)
			printf("%d, ", p[q]);
		else
			printf("%d", p[q]);
	printf("\n");
}
