#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to copied string
 * @str: string to copy into memory
 * Return: NULL or a pointer
 */

char *_strdup(char *str)
{
	char *d;

	int i, len = 0;

	if (str == 0)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		l++;
	}

	d = malloc(sizeof(char) * (l + 1));

	if (d == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		d[i] = str[i];
	}

	d[l] = '\0';

	return (d);
}
