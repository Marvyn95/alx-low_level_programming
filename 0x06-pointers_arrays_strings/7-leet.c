#include "main.h"

/**
 * *leet - encodes string into 1337
 * @ch: input string
 * Return: encoded string
 */

char *leet(char *ch)
{
	int i, j;

	char mn[] = "aeotl";

	char my[] = "AEOTL";

	char nb[] = "43071";

	for (i = 0; ch[i] != '\0'; ++i)
	{
		for (j = 0; j < 5; j++)
		{
			if (ch[i] == mn[j] || ch[i] == my[j])
			{
				ch[i] = nb[j];
			}
		}
	}
	return (ch);
}
