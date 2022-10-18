#include "main.h"


/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int count;
	char alphabet;

	count = 0;
	while (count < 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		count++;
		_putchar('\n');
	}
}
