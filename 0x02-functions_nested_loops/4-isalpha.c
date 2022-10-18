#include "main.h"
/**
 * _isalpha - checks if a letter is an alphabetic character
 * @c: character to be checked
 * Return: 1 if letter and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && <= 'z') || (c >= A && <= 'Z'))
		return (1);
	else
		return (0);

}
