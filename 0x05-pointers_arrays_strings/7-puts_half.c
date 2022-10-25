#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str:  An input string
 * Return: Nothing
 */
void puts_half(char *str)
{
	int number, p, q;

	number = 0;

	while (str[number] != '\0')
	{
		number++;
	}
	if (number % 2 == 0)
	{
		for (q = number / 2; str[q] != '\0'; q++)
		{
			_putchar(str[q]);
		}
	} else if (number % 2)
	{
		for (p = (number - 1) / 2; p < number - 1; p++)
		{
			_putchar(str[p + 1]);
		}
	}
	_putchar('\n');
}
