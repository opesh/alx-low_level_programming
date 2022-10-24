#include "main.h"

/**
 * _strlen - a funtion that returns the length of a string.
 * @n: An input character
 * Return: Nothing
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
