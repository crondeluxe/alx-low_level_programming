#include "main.h"

/**
 * _puts - prints strings follow by new line
 * @str: pointer to string
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;


	while (*str != '\0')
	{
		_putchar(*str);
		i++;
		str++;
	}
}
