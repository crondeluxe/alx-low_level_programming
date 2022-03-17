#include "main.h"

/**
 * _abs - this prints the absolute value of a number
 * @b: input
 * Return: absolute value
 */
int _abs(int b)
{
	if (b > 0)
	{
		b = b * 1;
	}
	if (b == 0)
	{
		b = b * 0;
	}
	if (b < 0)
	{
		b = b * -1;
	}
	return (b);
}
