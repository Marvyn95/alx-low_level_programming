#include "main.h"
/**
 * set_bit - sets value at a given index to 1
 * @n: pointer to the unsigned index
 * @index: index to be  changed to 1
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);
	m = 1 << index;
	*n = (*n | m);

	return (1);
}
