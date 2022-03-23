#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to the string
 * Return: void
 */
void puts_half(char *str)
{
	int n, l, m;

	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}
	if ((l % 2) == 0)
	{
		m = l / 2;

		for (n = m; n < l; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		m = (l - 1) / 2;

		for (n = m + 1; n < l; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
