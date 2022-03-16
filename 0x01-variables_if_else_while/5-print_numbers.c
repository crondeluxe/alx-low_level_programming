#include <stdio.h>

/**
 * main - this prints numbers from Zero to Nine
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
