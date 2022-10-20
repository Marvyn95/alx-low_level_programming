#include "main.h"
/**
 * print_diagonal - prints diagonals
 * @n: number of times taht \ is printed out
 * Return: void
 */
void print_diagonal(int n)
{
	int a, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= n; a++)
		{
			for (space = 1; space < a; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
