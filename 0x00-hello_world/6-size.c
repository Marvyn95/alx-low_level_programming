#include <stdio.h>

/**
 * main - the entry point into my source code
 * return: 0 if successful 
 * prints sizes of various types
 */

int main(void)
{	
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %d bytes(s)\n", sizeof(a));
	printf("Size of an int: %d bytes(s)\n", sizeof(b));
	printf("Size of a long int: %d bytes(s)\n", sizeof(c));
	printf("Size of a long long int: %d bytes(s)\n", sizeof(d));
	printf("Size of an float: %d bytes(s)\n", sizeof(e));
	return(0)
}
