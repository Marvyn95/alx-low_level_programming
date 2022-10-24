#include "main.h"

/**
 * _strcpy - copies string to another memory storage
 * @dest: string new memory address
 * @src: initiol memoryaddress
 * Return: value of pointer dest
 */

char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; src[a] != '\0'; ++a)
	{
		dest[b] = src[a];
		++b
	}
	dest[b] = '\0';

	return (dest);
}
