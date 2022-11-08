#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL or pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *cs;

	int i, ci, l = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] || s2[i]; i++)
	{
		l++;
	}

	cs = malloc(sizeof(char) * l);

	if (cs == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		cs[ci] = s1[i];
		ci++;
	}
	for (i = 0; s2[i]; i++)
	{
		cs[ci] = s2[i];
	}
	return (cs);
}
