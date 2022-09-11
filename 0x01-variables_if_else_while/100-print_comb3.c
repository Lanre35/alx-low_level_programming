#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int d = 0, p;

	while (d <= 9)
	{
		p = 0;
		while (p <= 9)
		{
			if (d != p && d < p)
			{
				putchar(d + 48);
				putchar(p + 48);
				if (d + p != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			p++;
		}
		d++;
	}
	putchar('\n');
}
