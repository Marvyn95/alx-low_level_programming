#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: input string to be reversed
 * Return: nothing
 */

void print_rev(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; ++x)
		;
		for (--x; x >= 0; --x)
		{
			_putchar(s[x]);
		}
	_putchar('\n');
}
