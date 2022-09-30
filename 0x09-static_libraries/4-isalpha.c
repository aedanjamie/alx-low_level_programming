#include "main.h"
/**
 * _isalpha - Checks for an alphabetic character and
 * returns 1. Else returns 0'
 *
 * @c: The character in ASCII code
 *
 * Return: 1 if output is an alphabetic character, 2 if else.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
