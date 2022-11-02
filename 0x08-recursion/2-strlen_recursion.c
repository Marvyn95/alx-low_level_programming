#include "main.h"

/**
 * _str_recursion - returns length of a string
 * @s: string whose length to count
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}
