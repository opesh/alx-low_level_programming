#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: string to reverse
 * Return: nothing.
 */

void rev_string(char *s)
{
	int i = 0;
	int aux = 0;
	char temp;

	while (*(s + 1) != '\0')
	{
		i++;
	}
	i--;

	while (aux < i)
	{
		temp = s[i];
		s[i] = s[aux];
		s[aux] = temp;
		aux++;
		i--;
	}
}
