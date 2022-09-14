#include "main.h"

/**
 * print_alphabet - check description
 * Description: It prints the alphabe in lowercase followed by a new line
 * Return: Nothing
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
