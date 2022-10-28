#include"main.h"


/**
 * string_toupper - this code changes all lowercase letters
 * of a string to uppercase
 * @s: string to modify
 * Return: the resulting string
 */

char *string_youpper(char *s)
{
	int g;

	for (g = 0; s[g] != '\0'; g++)
	{
		if (s[g] >= 'a' && s[g] <= 'z')
			s[g] = s[g] - 32;

	}
	return (s);
}
