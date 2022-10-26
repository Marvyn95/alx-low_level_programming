#include "main.h"

/**
 * *_strncat - cancatenates two strings
 * @dest: input string
 * @src: second input string
 * @n: number of characters on 2nd string to add
 * Return: returns dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
		;
	}
	for (b = 0; b <= n && src != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
	return (dest);
}
