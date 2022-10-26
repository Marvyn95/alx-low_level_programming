#include "main.h"

/**
 * *_strcat - appends a string to another
 * @dest: input string 1
 * @src: second input string
 * Return: returns the a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
		;
	}
	for (b = 0; src[b] = '\0'; b++)
	{
		dest[a++] = src[b];
	}
	return (dest);
}
