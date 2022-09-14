#include "main.h"

/**
 * _isalpha - Check description
 * @c: is the int that will use for the argument of the function
 * Return: 1 or in otherwise.
 */
int _isalpha(int c)
{
	if ((c>= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
