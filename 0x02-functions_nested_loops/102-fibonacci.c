#include <stdio.h>
/**
 * main - prints first fibonacci numbers
 * Description: print fibonacci sequence
 * Return: 0 if successful
 */
int main(void)
{
	int i = 1, j = 2, sum = 0, k;

	while (j < 400000)
	{
		if (j % 2 == 0)
		{
			sum = sum + j;
			k = j;
			j = j + i;
			i = k;
		}
	}

	printf("%d\n", sum);
	return (0);
}
