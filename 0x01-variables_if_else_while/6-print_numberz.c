#include <stdio.h>

/**
 * main - prints single digs from 0-9 using putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	i = '0';
	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
