#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n; input argument or the number to be input
 * Return: return + or _ or 0 depending
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
