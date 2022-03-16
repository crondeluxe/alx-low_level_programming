#include <stdio.h>

/**
 * main - this prints alphabets in lower case in a reverse mode
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char d;

	for (d = 'z'; d >= 'a'; d--)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
