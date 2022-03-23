#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: pointer to string
 * Return: void
 */
void print_rev(char *s)
{
	int l, last;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	last = l - 1;
	for (; last >= 0; last--)
	{
		_putchar(s[last]);
	}
	_putchar('\n');
}
