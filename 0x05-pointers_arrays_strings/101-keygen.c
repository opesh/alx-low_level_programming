#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - this program generates random valid passwords for
 * the program 101-crackme
 * Return:Always 0 (success)
 */

int main(void)
{
	int password[100];
	int a, sum, b;

	sum = 0;

	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
		password[a] = rand() % 78;
		sum += (password[a] + '0');
		putchar(password[a] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			b = 2772 - sum - '0';
			sum += b;
			putchar(b + '0');
			break;
		}
	}
	return (0);
}
