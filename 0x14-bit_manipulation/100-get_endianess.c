#include "main.h"
/**
 * get_endianness - checks endianess of my machine
 * Return: 0 for bigendianand 1 for little endian
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c;

	c = (char *)&x;

	return ((int)*c);
}
