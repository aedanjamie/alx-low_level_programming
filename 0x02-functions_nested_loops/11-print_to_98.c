#include <stdio.h>
/**
 * orint_to_98 - Prints all natrual numbers
 * from n to 98
 *
 * @n: input number
 *
 * Return: no return
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for(; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}