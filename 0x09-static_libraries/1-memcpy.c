#include "main.h"

/**
 * _memcpy - copies data from one memory to another
 * @dest: memory address copied to
 * @src: memory address copied from
 * @n: number of bytes to copy to and from
 * Return: pointer to the destination address
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
