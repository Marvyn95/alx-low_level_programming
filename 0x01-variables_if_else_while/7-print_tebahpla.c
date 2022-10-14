#include <stdio.h>
/**
 * main - prints reverse alphabet in upper and lower case
 * Return: returns zero if runs well
 */

int main(void)
{
	char ltl;

	char ltu;

	for (ltl = 'z'; ltl >= 'a'; ltl--)
	{
		putchar(ltl);
	}

	for (ltu = 'Z'; ltu >= 'A'; ltu--)
	{
		putchar(ltu);
	}
	putchar('\n');
	return (0);
}
