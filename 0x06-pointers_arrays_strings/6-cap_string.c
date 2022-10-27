#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @inp: pointer to input string
 * Return: returns the changed string
 */

char *cap_string(char *inp)
{
	int i;

	for (i = 0; inp[i] != '\0'; i++)
	{
		if (inp[i] >= 'a' && inp[i] <= 'z')
		{
			inp[i] = inp[i] - 32;
		}
		i++
	}
	return (inp);
}
