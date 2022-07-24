#include "main.h"

/**
 * _islower - check code
 *@c: input character
 *
 * Return:  1 id c is lowercase and 0 otherwise
 */

int _islower(int c)
{
	char i;
	int low = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			low = 1;
	}

	return (low);
}
