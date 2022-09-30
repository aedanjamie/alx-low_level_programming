#include <unistd.h>

/**
 * _putchar - writes the character c to stdou
 * @c: The character to print
 * Return: 1 if success, -1 if else
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
