#include "main.h"
/**
 * more_numbers - prints 0 - 14 10times
 */

void more_numbers(void)
{
	int a, b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
