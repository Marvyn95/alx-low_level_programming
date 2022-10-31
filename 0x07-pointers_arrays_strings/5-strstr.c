#include "main.h"

/**
 * _strstr - locate a string iin a string
 * @haystack: string to be searched
 * @needle: string to search for
 * Return: pointer to beginning of substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (*haystack)
	{
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
				{
					return (haystack);
				}
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
