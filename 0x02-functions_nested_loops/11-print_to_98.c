#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - this prints numbers from anypoint to 98
 * @n: input
 * Return: void
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", n);
	}
	else if (n < 98)
	{
		int a;

		for (a = n; a < 99; a++)
		{
			if (a == 98)
			{
				printf("%d\n", 98);
			}
			else
			{
				printf("%d, ", a);
			}
		}
	}
	else if (n > 98)
	{
		int b;

		for (b = n; b > 97; b--)
		{
			if (b == 98)
			{
				printf("%d\n", b);
			}
			else
			{
				printf("%d, ", b);
			}
		}
	}
}
