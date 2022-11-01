#include "main.h"
#include <stdio.h>

/**
 * _strchr - this code locates a character in a string
 * @s: string to search
 * @c: char to find
 * Return: apointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int p;

	while (1)
	{
		p = *s++;
		if (p == c)
		{
			return (s - 1);
		}
		if (p == 0)
		{
			return (NULL);
		}
	}
}
