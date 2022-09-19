#include <stdio.h>
#include "main.h"

/**
 * print_number - function that print all numbers from 0 to 9
 *
 * Return: returns nothing
 */
void print_numbers(void)
{	char digits;

	for (digits = '0'; digits <= '9'; digits++)
	{
		_putchar(digits);
	}
	_putchar('\n');
}
