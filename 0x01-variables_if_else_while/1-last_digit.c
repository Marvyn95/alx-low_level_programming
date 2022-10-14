#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints last digit of n and more details
 * Description: prints last digit of ranadom number
 * Return: zero if it runs wel
 */
int main(void)
{
	int n;

	int l;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l < 6 && l != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	else (l < 6 && l != 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, l);
	}
	return (0);
}
