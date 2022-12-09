#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string with bunary number
 * Return: the converted numberr
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;
	int len, i;
	int decval = 1;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	i = (len - 1);

	for (; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			total += decval;
		decval *= 2;
	}
	return (total);
}
