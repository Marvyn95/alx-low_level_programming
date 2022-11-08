#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to 2 dimensional array
 * @width: width of array
 * @height: height of the array
 * Return: returns NULL or pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **t;

	int hi;

	int wi;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	t = malloc(sizeof(int *) * height);

	if (t == NULL)
	{
		return (NULL);
	}

	for (hi = 0; hi < height; hi++)
	{
		t[hi] = malloc(sizeof(int) * width);

		if (t[hi] == NULL)
		{
			for (; hi >= 0; hi--)
			{
				free(t[hi]);
			}
			free(t);
			return (NULL);
		}
	}

	for (hi = 0; hi < height; hi++)
	{
		for (wi = 0; wi < width; wi++)
		{
			t[hi][wi] = 0;
		}
	}
	return (t);
}
