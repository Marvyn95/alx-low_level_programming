#include "main.h"

/**
 * _sqrt_recursion - computes square root of a number
 * @n: number whose sqrt is needed
 * Return: sqrt of n
 * @y: root number
 */
int comp(int n, int y)
{
	if (y * y == n)
	{
		return (y);
	}
	else if (y * y > n)
	{
		return (-1);
	}
	return (comp(n, y + 1));
}

int _sqrt_recursion(int n)
{
	return (comp(n, 1));
}
