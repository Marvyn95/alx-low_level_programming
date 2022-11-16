#include "3-calc.h"

int op_add(int a, int b);

int op_sub(int a, int b);

int op_mul(int a, int b);

int op_div(int a, int b);

int op_mod(int a, int b);



/**
 * op_add - Returns the sum of two numbers.
 * @a: The first number
 * @b: The second number
 * Return: The sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts numbers
 * @a: first number
 * @b: second number
 * Return: difference obtained
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 numbers
 * @a: first
 * @b: second
 * Return: product of the two
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - retuurns division of two numbers
 * @a: first
 * @b: second number
 * Return: quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns modulo
 * @a: first number
 * @b: second number
 * Return: returns modulo
 */

int op_mod(int a, int b)
{
	return (a % b);
}
