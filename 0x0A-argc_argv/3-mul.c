#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies arguments passed
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		b = 1;

		for (a = 1; a < 3; a++)
		{
			b = b * atoi(argv[a]);
		}
		printf("%d\n", b);
	}
	return (0);
}
