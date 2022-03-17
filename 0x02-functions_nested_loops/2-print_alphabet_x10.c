#include "main.h"

/**
 * print_alphabet_x10 - abcd...z x10
 * Description: prints alphabets in lowercase 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char *s = "abcdefghijklmnopqrstuvwxyz";

		while (*s != '\0')
		{
			_putchar(*s);
			s++;
		}
		_putchar('\n');
		i++;
	}
}
