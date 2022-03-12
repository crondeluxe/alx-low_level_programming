#include <stdio.h>

/**
 * main - this prints alphabets in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char d;

	for (d = 'a'; d <= 'z'; d++)
		putchar(d);
	putchar('\n');
	return (0);
}
