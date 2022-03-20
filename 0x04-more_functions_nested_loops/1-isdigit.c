#include "main.h"

/**
 * _isdigit - checks the value of c whether it is a digit
 * @c: input
 * Return: 1 if c is a digit
 * : 0 if c is anything else
 */
int _isdigit(int c)
{
	/* this returns 1 if c is a digit */
	if (c >= '0' && c <= '9')
		return (1);
	/* this returns 0 if c is anything else except digit */
	else
		return (0);
}
