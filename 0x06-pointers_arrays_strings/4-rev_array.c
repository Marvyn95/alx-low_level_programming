#include "main.h"

/**
 * reverse_array - reverses string with n characters
 * @a: pointer to input array
 * @n: elements in the array
 * Return: none
 */

void reverse_array(int *a, int n)
{
	int tmp, s, e;

	s = 0;

	e = n - 1;

	while (s < e)
	{
		tmp = a[s];
		a[s] = a[e];
		a[e] = tmp;
		s++;
		e++;
	}
}
