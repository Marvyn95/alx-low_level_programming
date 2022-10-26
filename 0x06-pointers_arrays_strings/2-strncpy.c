#include "main.h"

/**
 * *_strncpy - copies a atring into a string variable
 * @dest: input string variable
 * @src: character input string variable
 * @n: input argument
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
