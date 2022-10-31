#include "main.h"

/**
 * _strpbrk - searches for a string for the set bytes
 * @s: string to be searched
 * @accept: string with characters to search
 * Return: pointer to matched string or NULL if no match
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j = 0;

	while (s[j] != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == s[j])
			{
				return (s[j]);
			}
		}
		j++
	}
	return ('\0');
}
