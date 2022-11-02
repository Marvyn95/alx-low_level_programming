#include "main.h"

/**
 * comp - checks if values are multiples of n
 * @n: paramter to check if prime
 * @k: parameter to check if multiple
 * Return: number of multiples
 */

int comp(int n, int k)
{
	int c = 0;

	if (k <= n)
	{
		if (n % k == 0)
		{
			c++;
		}
		return (c + comp(n, k + 1));
	}
	return (c);
}

/**
 * is_prime_number - checks if a number is prime
 * @n: input or number to check
 * Return: 1 or 0
 */

int is_prime_number(int n);
{
	if (comp(n, 1) == 2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
