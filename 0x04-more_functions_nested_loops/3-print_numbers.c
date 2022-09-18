#include <stdio.h>
#include "main.h"

/**
 * print_number - function that print all numbers from 0 to 9
 *
 * Return: returns nothing
 */
void print_numbers(void)
{	char n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
