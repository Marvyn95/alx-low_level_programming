#include "main.h"
/**
 * print_number - prints an integer
 * @n: input argument
 * Return: void
 */

void print_number(int n)
{
	unsigned int n;

	if (n <= 0)
	{
		_putchar('-');
		n = -n
	_putchar(n);
	}
	else if (n > 0)
	{
		_putchar(n);
	}
}
