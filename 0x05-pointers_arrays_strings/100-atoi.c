#include "main.h"

/**
 * _atoi - converts a string to a number
 * @s: input arguments
 * Return:number
 */

int _atoi(char *s)
{
	unsigned int n;

	int sn = 1

	n = 0;

	do {
		if (*s == '-')
			sn *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	}
	while (*s++)
		return (n * sn);
}
