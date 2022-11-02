#include "main.h"

/**
 * comp - that tests roots of a number
 * @y: root being tested
 * @n: value whose sqrt is needed
 * Return: sqrt of n
 *
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

/**
 * _sqrt_recursion - computes sqrt of a number b
 * @n: number whose sqrt we need
 * Return: sqrt of n
 */

int _sqrt_recursion(int n)
{
	return (comp(n, 1));
}
