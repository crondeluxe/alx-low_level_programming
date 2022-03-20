#include "main.h"

/**
 * _isupper - checks the value of c whether is uppercase
 * @c: input
 * Return: 1 if the value of c is uppercase
 * : 0 if the value of c is anything else
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
