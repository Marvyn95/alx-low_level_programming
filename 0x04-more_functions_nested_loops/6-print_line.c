#include "main.h"
/**
 * print_line - prints a line
 * @n: number entered
 */

void print_line(int n)
{
	int ln;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (ln = 1; ln <= n; ln++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
