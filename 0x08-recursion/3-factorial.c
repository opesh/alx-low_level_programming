#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to return the factoral from
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * fctoral(n - 1));
}
