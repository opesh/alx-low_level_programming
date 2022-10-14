#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
		putchar('\n');
	}
	return (0);
}
