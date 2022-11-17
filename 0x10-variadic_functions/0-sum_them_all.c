#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all arguments passed
 * @n: number of integers passed
 * @...: other passed variadic arguments
 * Return: sum of al the arguments passed
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list number;
	unsigned int i, sum = 0;

	va_start(number, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(number, int);
	}

	va_end(number);

	return (sum);
}
