#include "main.h"

/**
 * main - tests function that prints if integer is positive or negative
 * positive_or_negative();  checks if a number is positive or negative
 * Return: 0
 */

int main(void)
{
	int i;

	i = 98;
	for (i >= 48; i <= 57; i++)
	{
		positive_or_negative(i);
		printf("%d", i);
	}
	return (0);
}
