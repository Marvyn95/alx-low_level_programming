#include "main.h"

/**
 * *string_toupper - chamges lower case letter to upper case
 * Return: changed letters
 * @inp: input string pointer
 */

char *string_toupper(char *inp)
{
	int i = 0;

	int d = 32;

	for (i = 0; inp[i] != '\0'; i++)
	{
		if (inp[i] >= 'a' && inp[i] <= 'z')
		{
			inp[i] = inp[i] - d;
		}
	}
	return (inp);
}
