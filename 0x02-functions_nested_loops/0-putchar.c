#include "main.h"

/**
 * main-program entry point
 * Return: 0 success
 */

int main(void)
{
	char letters[9] = "_putchar\n";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(letters[i]);
	}
	return (0);
}
