#include "main.h"
/**
 * main - prints 0-100 with fizz buzz and fizzbuzz
 * Return: 0 if its successful
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%c ", FizzBuzz);
		}
		else if (i % 3 == 0)
		{
			printf("%c ", Fizz);
		}
		else if (i % 5 == 0)
		{
			printf("%c ", Buzz);
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
