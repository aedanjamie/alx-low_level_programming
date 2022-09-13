#include "main.h"
/**
 * _islower - Checks the output for a lowercase
 * character and returns 1. Else, returns 0
 *
 * @c: The character is in ASCII code
 *
 * Return: 1 for lowercase character, 0 for rest.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
