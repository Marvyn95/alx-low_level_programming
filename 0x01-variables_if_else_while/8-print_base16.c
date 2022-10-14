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
	for (b = 'A'; b <= 'F'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
