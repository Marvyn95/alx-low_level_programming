#include "main.h"
/*
 * main - prints lower case alphabet
 * Return: 0 if successful
 */

void print_alphabet(void)
{
	char alph;
	
	alph = 'a'
	
	while (alph <= 'z')
	{
		_putchar(alph);
		alph++;
	}
	_putchar('\n');
	return (0);
}
