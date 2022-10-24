#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * Return: nothing  really
 * @a: first input
 * @b: second input
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

