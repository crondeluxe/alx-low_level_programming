#include "main.h"

/**
 * print_triangle - prints # in a traingle form for input of size > 0
 * @size: input
 * Return: void
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= (size - a); b++)
		{
			_putchar(32);
		}
		for (c = 1; c <= a; c++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
