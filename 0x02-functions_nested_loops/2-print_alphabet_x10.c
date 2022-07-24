include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10x
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(print_alphabet());
	}
	_putchar('\n');
}
