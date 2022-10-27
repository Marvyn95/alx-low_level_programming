#include "main.h"

/**
 * _strcat - appends a string to another
 * @dest: input string 1
 * @src: second input string
 * Return: returns the a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;

	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
