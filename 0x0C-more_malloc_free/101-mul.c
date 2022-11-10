#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if succesful
 */

int main(int argc, char *argv[])
{
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

	printf("%d", argv[1] * argv[2]);
}
