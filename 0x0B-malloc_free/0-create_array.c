#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array initialized with a character
 * @size: size fo the arry nedded
 * @c: character to fillthe array at first
 * Return: 0 or NULL or poiter to array
 */

char *create_array(unsigned int size, char c)
{
	char *array;

	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	if (array = NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
