#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int lb;
	long long int llb;
	float ft;

	printf("Size of a char: %d byte(s)\n", sizeof(a));
	printf("Size of an int: %d byte(s)\n", sizeof(b));
	printf("Size of a long int: %d byte(s)\n", sizeof(lb));
	printf("Size of a long long int: %d byte(s)\n", sizeof(llb));
	printf("Size of a float: %d byte(s)\n", sizeof(ft));
	return (0);
}
