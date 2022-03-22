#include "main.h"

/**
 * print_square - this prints # in a square form for input size > 0
 * @size: input
 * Return: void
 */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
}
