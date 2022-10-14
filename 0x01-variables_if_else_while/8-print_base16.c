#include <stdio.h>
/**
 * main - prints numbers in base sixteen
 * Return: returns zero if it works
 */

int main(void)
{
	int b;

	for (b = '0'; b <= '9'; b++)
	{
		putchar(b);
	}
	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
