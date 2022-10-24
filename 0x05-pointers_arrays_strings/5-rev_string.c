#include "main.h"
/**
 * rev_string - reverses a string
 * @s: input string
 * Return: nothing
 */

void rev_string(char *s)
{
	int a, b;

	char tmp;

	a = 0;

	while (s[b] != 0)

		b++;

	b--;
	for (a = 0; a <= b; b--, a++)
	{
		tmp = s[a];
		s[a] = s[b];
		s[a] = tmp
	}
}
