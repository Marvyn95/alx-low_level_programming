#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dog files
 * @d: dog filename or variable to be freed
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free((*d).owner);
	free((*d).name);
	free(d);
}
