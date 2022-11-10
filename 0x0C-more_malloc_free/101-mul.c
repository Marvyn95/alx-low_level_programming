#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers
 * @argc: argument count
 * @argv: argument vector
 * @pr: product of the two numbers
 * Return: 0 if succesful
 */

int main(int argc, char *argv[])
{
	int pr;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (isdigit(argv[1]) == 0 || isdigit(argv[2] == 0))
	{
		printf("Error\n");
		exit(98);
	}

	pr = argv[1] * argv[2];

	printf("%d", pr;
}
