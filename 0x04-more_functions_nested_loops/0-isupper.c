#include "main.h"

/**
 * _isupper - checks the value of c whether is uppercase
 * @c: input
 * Return: 1 if the value of c is uppercase
 * : 0 if the value of c is anything else
 */
int _isupper(int ci)
{
	/* this returns 1 if the input is uppercase */
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	/* this returns 0 if the input is anything else */
	else
		return (0);
}
