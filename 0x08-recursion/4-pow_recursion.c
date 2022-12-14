#include "main.h"

/**
 * _pow_recursion - prints Yth power of a number x
 * @x: number
 * @y: power
 * Return: yth power of x
 */

int _pow_recursion(int x, int y)
{
	if (y == 1)
	{
		return (x);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y <= 1)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
