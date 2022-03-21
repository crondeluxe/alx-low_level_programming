#include "main.h"

/**
 * more_numbers - prints 0 - 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;

	while (i < 10)
	{
		char *d = "01234567891011121314";

		while (*d != '\0')
		{
			_putchar(*d);
			d++;
		}
		_putchar('\n');
		i++;
	}
}
