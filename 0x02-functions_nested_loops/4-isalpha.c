#include "main.h"

/**
 * _isalpha - checks whether c is an alphabet
 * @c: input
 * Return: 1 if c is an alphabet
 * : 0 if c is anything else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
