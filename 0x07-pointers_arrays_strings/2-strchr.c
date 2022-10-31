#include "main.h"

/**
 * _strchr - searches for a charcter in a string
 * @s: input string
 * @c: charcter to search for
 * Return: first occurence of the character
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
		{
			return ((s + a));
		}
	}
	return ('\0');
}
