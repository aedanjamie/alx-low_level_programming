#include "main.h"
/**
 * int _islower(intc) - Checks the output for a lowercase character.
 *
 *Return: Always 0 (Success)
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
