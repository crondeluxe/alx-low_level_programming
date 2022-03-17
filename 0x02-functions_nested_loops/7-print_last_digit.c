#include "main.h"

/**
 * print_last_digit - this prints the last digit of b
 * @n: input
 * Return: b
 */
int print_last_digit(int n)
{
	int b;

	if (n >= 0)
	{
		b = n % 10;
	}
	else
	{
		b = ((n % 10) * -1);
	}
	_putchar('0' + b);
	return (b);
}
