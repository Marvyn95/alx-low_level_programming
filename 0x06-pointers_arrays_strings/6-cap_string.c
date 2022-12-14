#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @inp: pointer to input string
 * Return: returns the changed string
 */

char *cap_string(char *inp)
{
	int i = 0;

	while (inp[i] != '\0')
	{
		while (!(inp[i] >= 'a' && inp[i] <= 'z'))
		{
			i++;
		}

		if (inp[i - 1] == ' '
		|| inp[i - 1] == '\t'
		|| inp[i - 1] == '\n'
		|| inp[i - 1] == ','
		|| inp[i - 1] == ';'
		|| inp[i - 1] == '.'
		|| inp[i - 1] == '!'
		|| inp[i - 1] == '?'
		|| inp[i - 1] == '"'
		|| inp[i - 1] == '('
		|| inp[i - 1] == ')'
		|| inp[i - 1] == '{'
		|| inp[i - 1] == '}'
		|| i == 0)
		{
			inp[i] -= 32;
		}
		i++;
	}
	return (inp);
}
