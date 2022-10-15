#include <stdio.h>
/**
 * main - prints combinations of two digit combinations
 * Return: zero if successful
 */
int main(void)
{
	int a, b, c, d;
	
	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 8; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				for (d = 1; d <= 9; d++)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
					putchar(c + '0');
					putchar(d + '0');
					if (a == 9 && b == 8 && c == 9 && d == 9)
					{	
						continue;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
