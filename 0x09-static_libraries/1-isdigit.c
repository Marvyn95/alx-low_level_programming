#include "main.h"
/**
 * _isdigit - checks if a number is from 0 to 9
 * @c: input argumenet to check
 * Return: 1 if digit between o and 9, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
