#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - prints sum of integer arguments passed
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0 or 1
 */

int main(int argc, char *argv[])
{
	int i, j, l, s;

	char *p;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		s = 0;
		for (i = 1; i < argc; i++)
		{
			p = argv[i];
			l = strlen(p);

			for (j = 0; j < l; j++)
			{
				if (isdigit((p + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			s = s + atoi(argv[i]);
		}
		printf("%d\n", s);
	}
	return (0);
}
