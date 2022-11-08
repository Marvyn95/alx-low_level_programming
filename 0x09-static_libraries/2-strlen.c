#include "main.h"

/**
 * _strlen - prints the length of a atring
 * @s: string input when calling the function
 * Return: string length
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; ++s)
	{
		++i;
	}
	return (i);
}
