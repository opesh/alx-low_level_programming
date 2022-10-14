#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int i;
	char alp[26] = "abcdfghijklmnoprstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		printf("%d\n", alp[i]);
	}
	putchar('\n');
	return (0);
}
