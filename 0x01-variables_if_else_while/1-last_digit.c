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

	int k;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	k = n % 10;
	if (k > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, k);
	}
	else if (k < 6 && k != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, k);
	}
	else
	{
	printf("Last digit of %d is %d and is 0\n", n, k);
	}
	return (0);
}
