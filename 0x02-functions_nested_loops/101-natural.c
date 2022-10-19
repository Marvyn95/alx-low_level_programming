#include <stdio.h>
#include "main.h"
/**
 * main - main function that prints the totals
 * Description: prints sum of multiples of 3 and 5
 * Return: 0 if successful
 */

int main(void)
{
	int n, sum = 0;

	while (n < 1024)
	{
		if (n % 3 == 0)
		{
			sum = sum + n;
		}
		else if (n % 5 == 0)
		{
			sum = sum + n;
		}
		n++;
	}
	printf("%d\n", sum);
	return (0);
}
