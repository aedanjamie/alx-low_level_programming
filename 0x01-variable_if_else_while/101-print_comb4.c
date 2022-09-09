#include<stdio.h>
/**
 * main - Prints all possible combinations of three digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, e, c;

	i = 48;
	e = 48;
	c = 48;

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			c = 48;
			while (c < 58)
			{

				if (e != i && e != c && i != c && e < i && i < c)
				{
					putchar(e);
					putchar(i);
					putchar(c);
					if (i == 56 && e == 55 && c == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
