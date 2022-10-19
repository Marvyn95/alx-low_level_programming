#include "main.h"
/**
 * times_table - prints the nine times table
 *   Return: zero if succesful
 */

void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			_putchar(c);
			if (c != 81)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
