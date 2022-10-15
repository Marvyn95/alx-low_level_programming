#include <stdio.h>
/**
 * main - prints combinations of two digit combinations
 * Return: zero if successful
 */
int main(void)
{
	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				for (d = 1; d <= 9; d++)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (a != 9 && b != 9 && c != 9 && d != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
		putchar('\n');
	}
	return (0);
}
