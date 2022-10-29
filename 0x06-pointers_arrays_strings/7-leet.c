#include "main.h"

/**
 * leet - this code encodes a string in 1337
 * @s: string to be encoded
 * Return: the resulting string;
 */

char *leet(char *s)
{
	int p, q;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (p = 0; s[p] != '\0'; p++)
	{
		for (q = 0; q < 10; q++)
		{
			if (s[p] == a[q])
			{
				s[p] = b[q];
			}
		}
	}
	return (s);
}
