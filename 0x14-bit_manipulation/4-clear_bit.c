#include "main.h"
/**
 * clear_bit - sets bit to 0
 * @n: pointer to the number
 * @index: index of bit to change
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);

}
