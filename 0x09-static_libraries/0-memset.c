#include "main.h"

/**
 * _memset - fills continuous memory with the same byte charater
 * @s: pointer to a memory allocation pr address
 * @b: value of the character to fill the memory
 * @n: bytes of memory to be filled by character b
 * Return: returns the first memory address
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
