#include <stdio.h>
/**
 * main - prints entire alphabet but a few
 * Return: zero if thumbs up
 */

int main(void)
{
	char chl;

	for (chl = 'a'; chl <= 'z'; chl++)
	{
		if (chl == 'e' || chl == 'q')
		{
			continue;
		}
	putchar(chl);
	}
	putchar('\n');
	return (0);
}
