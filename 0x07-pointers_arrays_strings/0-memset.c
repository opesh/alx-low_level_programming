#include "main.h"

/**
 * _memset - this code fills memory with a constant byte
 * @s: memory area to be filled
 * @p: char to copy
 * @n: number of times to copy b
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char p, unsigned int n)
{
	unsigned int q;

	for (q = 0; q < n; q++)
	{
		s[q] = p;
	}
	return (0);
}
