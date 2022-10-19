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
		_putcha('0');
		_putchar(',');
		_putchar(' ');
		for (b = 0; b <= 9; b++)
		{
			c = a * b;

			if ((d / 10) > 0)
			{
				_putchar((c / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((c % 10) + '0');

			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
