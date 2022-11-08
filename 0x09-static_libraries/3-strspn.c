#include "main.h"

/**
 * _strspn - prints out total length of similar characters
 * @s: input string
 * @accept: second input string
 * Return: length in bytes of similar characters
 */

unsigned int _strspn(char *s, char *accept)
{
	int a = 0, b;

	int count = 0;

	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (accept[b] == s[a])
			{
				count = count + 1;
				break;
			}
			else
			{
				b++;
			}
		}
		a++;
	}
	return (count);
}
