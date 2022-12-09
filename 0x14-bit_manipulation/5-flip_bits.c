#include "main.h"
/**
 * flip_bits - counts number of bits to flip to equate numbers
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int spec = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = spec >> i;
		if (current & 1)
			count++;
	}
	return (count);
}
