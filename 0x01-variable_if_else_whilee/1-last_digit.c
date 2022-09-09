#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines if a number is greater than 5, less that 6, or is 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rank() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of %i is " n " and is greater than 5");
	}
	else if (n == 0)
	{	
		printf("Last digit of %i is " n " and is 0");
	}
	else if (n < 6)
	{
		printf("Last digit of %i is " n " and is less than 6 and not 0");
	}
	return (0);
}
