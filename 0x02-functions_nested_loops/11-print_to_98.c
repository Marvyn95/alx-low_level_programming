#include "main.h"
/**
 * print_to_98 - prints natural numbers to 98
 * @k: input arguments
 * Return: zero if successful
 */

void print_to_98(int k)
{
	if (k < 98)
	{
		while (k <= 98)
		{
			printf("%d", k);
			if (k != 98)
			{
				printf(", ");
			}
			k++;
		}
	}
	else if (k > 98)
	{
		while (k >= 98)
		{
			printf("%d", k);
			if (k != 98)
			{
				printf(", ");
			}
			k--;
		}
	}
	else if (k == 98)
	{
		printf("98");
	}
	printf("\n");
}
