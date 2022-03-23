#include "main.h"

/**
 * puts2 - prints even characters of a string
 * @str: pointer to the string
 * Return: void
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		if ((*str % 2) == 0)
		{
			_putchar(*str);
		}
		str++;
	}
	_putchar('\n');
}
