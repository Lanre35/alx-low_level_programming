#include "main.h"

/**
 * _isalpha - Check description
 * @c: is the int that will use for the argument of the function
 * Return: 1 or in otherwise.
 */
int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z' lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c lower || upper)
				isletter = 1;
		}
	}
	return (isletter);
}
