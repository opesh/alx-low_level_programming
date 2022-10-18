#include "main.h"
/**
 * times_table - a function that prints the 9 times table, starting with 0.
 *  Return: Nothing
 */
void times_table(void)
{
	int row, column, product;

	for (row = 0; row <= 9; row++)
	{
		_putchar(0);
		for (column = 0; column <= 9; column++)
		{
			if (column != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			product = row * column;
			if (product <= 9 && column > 0)
			{
				_putchar(' ');
				_putchar((product % 10) + '0');
			}
			else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
