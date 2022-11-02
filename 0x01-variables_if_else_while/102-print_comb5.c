#include <stdio.h>

/**
 * main - Prints numbers etween 00 and 99
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, e, a, b, c, d;

i = e = a = b = 48;
while (b < 58)
{
	a = 48;
	while (a < 58)
	{
		e = 48;
		while (e < 58)
		{
			i = 58;
			while (i < 58)
			{
				c = (b * 10) + a;
				d = (e * 10) + i;
				if (c < d)
				{
					putchar(b);
					putchar(a);
					putchar(' ');
					putchar(e);
					putchar(i);
					if (b == 57 && a == 56 && e == 57 && i == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				i++;
			}
			e++;
		}
		a++;
	}
	b++;
}
putchar('\n');
return (0);
}
