#include <stdio.h>
/**
 * main - still a fibonacci but modified a bit
 * Description: fibonacci seq print out but only evens
 * Return: 0 if works well
 */

int main(void)
{
	int i;

	unsigned long int j, k, new, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 33; i++)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j
		}

		new = j + k;
		j = k;
		k = new
	}
	printf("%lu\n", sum);
	return (0);
}
