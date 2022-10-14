#include <stdio.h>
/**
 * main - print all possible combinations of single digit numbers
 * Return: zero if the program is amazingly functional
 */

int main(void)
{
	int k;

	for (k = '0'; k <= '9'; k++)
	{
	putchar(k);
		if (k < '9')
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
return (0);
}
