#include "main.h"

/**
 * _islower - checks whether c is lowercase
 *@c: input
 *Return: 1 if the value of c is lowercase
 *: 0 if the value of c is anything else
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
