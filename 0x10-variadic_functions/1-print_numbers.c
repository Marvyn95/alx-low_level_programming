#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers with specified separator
 * @separator: what to separate the numbers
 * @n: number of integers passed to the function
 * @...: variable number of arguments passed to function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list number;
	unsigned int i;

	va_start(number, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(number, int));

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	print("\n");
	va_end(number);
}
