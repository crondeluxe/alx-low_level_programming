#include "main.h"

/**
 * print_line - this prints line n times
 * @n: input
 * Return: void
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
			_putchar(95);
	}
	_putchar('\n');
}
