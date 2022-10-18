#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 */
void print_alphabet_x10(void)
{
	char alpha = 'a';
	
	int i = 0;

	while(i < 10)
	{
		alpha = 'a';

		while(alpha <= 'z')
		{
			_putchar(alpha);
		}
	}
	_putchar('\n');
}
