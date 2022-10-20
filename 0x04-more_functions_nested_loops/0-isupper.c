#include "main.h"

/**
 * _isupper - upper case letter detector function
 * @c: input argument or character
 * Return: 1 if upper and 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
