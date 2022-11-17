#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**print_all - prints everything
 * @format: data types to print out
 * @...: variadic arguments passed
 */

void print_all(const char * const format, ...)
{
	va_list argument;

	va_start(argument, format);
}
