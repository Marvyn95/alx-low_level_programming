#include "main.h"
/**
 * rot13 - -encodes a string using rot 13
 * @inp: input string address
 * Return: returns encrypted string
 */

char *rot13(char *inp)
{
	int i;

	for (i = 0; inp[i] != '\0'; i++)
	{
		if ((inp[i] >= 'a' && inp[i] < 'n')
				|| (inp[i] >= 'A' && inp[i] < 'N'))
			{
				inp[i] = inp[i] + 13;
			}
		else if ((inp[i] >= 'n' && inp[i] <= 'z')
				|| (inp[i] >= 'N' && inp[i] <= 'Z'))
			{
				inp[i] = inp[i] - 13;
			}
	}
	return (inp);
}
