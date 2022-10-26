#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first input string
 * @s2: second input string
 * Return: returns different integers depending
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			b = s1[a] - s2[b];
			break;
		}
		else
		{
			b = s1[a] - s2[a];
		}
		a++
	}
	return (0);
}
