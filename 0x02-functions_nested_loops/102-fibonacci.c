#include <stdio.h>
/**
 * main - prints first fibonacci numbers
 * Description: print fibonacci sequence
 * Return: 0 if successful
 */
int main(void)
{
	unsigned long f1 = 0, f2 = 1, sum;

	int k;

	for (k = 0; k < 50; k++)
	{
		sum = f1 + f2;
		printf("%lu", sum);

		f1 = f2;
		f2 = sum;

		if (k == 49)
			printf("\n");
		else
		{
			printf(", ");
		}
	}
	return (0);
}
