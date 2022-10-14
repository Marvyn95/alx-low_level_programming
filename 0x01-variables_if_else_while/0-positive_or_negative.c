#include <stdlib.h>
#include <time.h>
/**
 * main - prints random numbers
 * Return: zero if runs well
 */

int main(void)

{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else
	{
	print("%d is positive\n", n);
	}
	return (0);
}
