#include "main.h"

/**
 * _puts - prints a string to the standard output and a new line
 * Return: nothing at all
 * @str: input string to be printed out
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}
