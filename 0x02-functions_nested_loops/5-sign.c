#include "main.h"

/**
 * print_sign - checks the sign of n
 * @n: input
 * Return: 1 if n is greater than zero
 * 0 if n is zero
 * -1 if n is less than zero
 */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		_putchar('+');
		result = 1;
	}
	if (n == 0)
	{
		_putchar('0');
		result = 0;
	}
	if (n < 1)
	{
		_putchar('-');
		result = -1;
	}
	return (result);
}
