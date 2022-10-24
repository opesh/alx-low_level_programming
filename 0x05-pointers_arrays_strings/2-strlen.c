#include "main.h"
#include <stdio.h>
/**
 * _strlen - a function that returns the length of a string.
 * @s: pointer to an string
 * Return: int
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
