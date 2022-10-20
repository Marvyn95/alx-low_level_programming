#include "main.h"
/**
 * main - prints 0-100 with fizz buzz and fizzbuzz
 * Return: 0 if its successful
 */

int main(void)
{
	int i;

	char F[] = "Fizz";

	char B[] = "Buzz";

	char FB[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s ", FB);
		}
		else if (i % 3 == 0)
		{
			printf("%s ", F);
		}
		else if (i % 5 == 0)
		{
			printf("%s ", B);
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
