#include <stdio.h>

/**
 * main - this prints all possible combinations of 0-9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
		if (d != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
