#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates a block of memory
 * @b: number of bytes to allocate
 * Return: pointer to first mem address
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}
