#include "main.h"
/**
 * print_number - prints an integer
 * @n: input
 * Return: void
 */

void print_number(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
		_putchar('-');
		m = -m;
	}
	if ((n / 10) > 0)
	{
		print_number(m / 10);
	}
	_putchar((m % 10) + '0');
}
