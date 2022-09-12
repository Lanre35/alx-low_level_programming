#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: It prints all possible different comibination of tow digits
 * seperated by comma and space
 * Return: 0
 */
int main(void)
{
	int n1, n2;

	for (n1 = 0; n1 <= 8; n1++)
	{
		for (n2 = n1 + 1; n2 <= 9; n2++)
		{
			putchar((n1 % 10) + '0');
			putchar((n2 % 10) + '0');
			if (n1 == 8 && n2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
