#include <stdio.h>

/**
 * main - prints all numbers base 16 followed by newline
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	char hexvals[] = "0123456789abcdef";

	for (i = 0; i <= 15; i++)
	{
		putchar(hexvals[i]);
	}
	putchar('\n');
	return (0);
}
