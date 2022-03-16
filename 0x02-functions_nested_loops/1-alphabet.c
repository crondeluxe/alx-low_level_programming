#include "main.h"

/**
 * print_alphabet - abcd
 * Description: prints alphabets in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	char *c = "abcdefghijklmnopqrstuvwxyz";

	while (*c != '\0')
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');
}
