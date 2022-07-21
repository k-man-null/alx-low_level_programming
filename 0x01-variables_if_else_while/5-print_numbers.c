#include <stdio.h>

/**
 * main - prints single dig numbers starting for 0 to 9
 * number stored in the variable i
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
