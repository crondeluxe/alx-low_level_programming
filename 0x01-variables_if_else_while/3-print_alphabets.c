#include <stdio.h>

/**
 * main - this prints the alphabet in loower case then in upper case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c, d;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (d = 'A'; d <= 'Z'; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
