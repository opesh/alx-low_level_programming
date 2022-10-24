#include "main.h"

/**
 * swa_int - swap the values of two integers.
 *
 * @a: pointer to an int
 * @b: pointer to other int
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
