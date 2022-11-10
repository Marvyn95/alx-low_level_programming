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
	int pr;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	pr = atoi(argv[1]) * atoi(argv[2]);

	printf("%d", pr);
	return (0);
}
