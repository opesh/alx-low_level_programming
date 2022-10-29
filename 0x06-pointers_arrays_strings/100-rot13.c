#include "main.h"
/**
 * rot13 - this code encodes a string in rot13
 * @s: string to be encoded
 * Return: the resulting string
 */

char *rot13(char *s)
{
	int p, q;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (p = 0;  *(s + p); p++)
	{
		for (q = 0; q < 52; q++)
		{
			if (a[q] == *(s + p))
			{
				*(s + p) = b[q];
				break;
			}
		}
	}
	return (s);
}
