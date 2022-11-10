#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory
 * @nmemb: number of elements
 * @size: bytes of each member
 * Return: NULL or pointer to memory allocated
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	mem = malloc(size * nmemb);

	if (mem == NULL)
	{
		return (NULL);
	}

	filler = mem;
	for (index = 0; index < (size * nmemb); index++)
	{
		filler[index] = '\0';
	}
	return (mem);
}
