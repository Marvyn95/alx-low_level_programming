#include "function_pointers.h"

/**
 * array_iterator - executes function given combined with other input arguments
 * @array: array argument
 * @size: size of the array
 * @action: pointer to the function to excecute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array == NULL || action == NULL)
		return;

	while (size > 0)
	{
		action(array[i]);
		i++;
		size--;
	}
}
