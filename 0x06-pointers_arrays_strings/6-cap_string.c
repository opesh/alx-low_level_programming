#include "main.h"

/**
 * cap_string - this code capitalizes every word of a string
 * @s: string to modify
 * Return: resulting string
 */

char *cap_string(char *s)
{
	int p, q;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}', };

	for (p = 0; s[p] != '\0'; p++)
	{
		if (p == 0 && s[p] >= 'a' && s[p] <= 'z')
			s[p] -= 32;

		for (q = 0; q < 13; q++)
		{
			if (s[p] == spe[q])
			{
				if (s[p + 1] >= 'a' && s[p + 1] <= 'z')
				{
					s[p + 1] -= 32;
				}
			}
		}
	}
	return (s);
}
