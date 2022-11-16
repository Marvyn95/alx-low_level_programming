#include "function_pointers.h"

/**
 * int_index - searches for a specified integer from an array
 * @array: array too search
 * @size: size of the array to search
 * @cmp: pointer to to function that compares the values
 * Return: index of matching element or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}
	return (-1);
}
