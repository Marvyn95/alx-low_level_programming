#include "main.h"
#include <stdlib.h>

/**
 * argstostr - cancatenates arguments
 * @ac: argument number
 * @av: argument vecor
 * Return: 0 or NULL or pointer to string
 */

char *argstostr(int ac, char **av)
{
	char *str;

	int arg, b, i, s = ac;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (arg = 0; arg < ac; arg++)
	{
		for (b = 0; av[arg][b]; b++)
		{
			s++;
		}
	}
	str = malloc(sizeof(char) * s + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	for (arg = 0; arg < ac; arg++)
	{
		for (b = 0; av[arg][b]; b++)
		{
			str[i++] = av[arg][b];
		}
		str[i++] = '\n';
	}
	str[s] = '\0';
	return (str);
}
