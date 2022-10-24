#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: string to reverse
 * Return: nothing.
 */

void rev_string(char *s)
{
	int a = 0, b = 0;
	char c;

	while (s[a] != '\0')
		a++;

	while (b < a--)
	{
		c = s[b];
		s[b++] = s[a];
		s[a] = c;
	}
}
