#include "main.h"

/**
 * _atoi - this code converts a string to an integer
 * @s: string to be converted to an integer
 * Return: the integer converted fronm the string
 */

int _atoi(char *s)
{
	int a, b, c, num, f, digit;

	a = 0;
	b = 0;
	c = 0;
	num = 0;
	f = 0;
	digit = 0;

	while (s[num] != '\0')
		num++;

	while (a < num && f == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			c = c * 10 + digit;
			f = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			f = 0;
		}
		a++;
	}
	if (f == 0)
		return (0);
	return (c);
}
