#include <stdio.h>
/**
 * main - prints reverse alphabet in upper and lower case
 * Return: returns zero if runs well
 */

int main(void)
{
	char ltl;

	for (ltl = 'z'; ltl >= 'a'; ltl--)
	{
		putchar(ltl);
	}
	putchar('\n');
	return (0);
}
