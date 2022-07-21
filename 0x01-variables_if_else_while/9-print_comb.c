#include <stdio.h>

/**
 * main - prints out every possible combination of single digit numbers
 * Return: zero for success and other for error
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)

	{
		putchar(i);
		if (i == '9')
		{
			break;
		}
		else
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n')
	return (0);
}
