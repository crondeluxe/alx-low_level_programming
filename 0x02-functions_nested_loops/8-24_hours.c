#include "main.h"

/**
 * jack_bauer - this prints every minutes from 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (c = 48; c <= 57; c++)
			{
				for (d = 48; d <= 57; d++)
				{
					if ((a <= 50 && b <= 51) && (c <= 53 && d <= 57))
							{
							_putchar(a);
							_putchar(b);
							_putchar(':');
							_putchar(c);
							_putchar(d);

							if (a + b + c + d == 227 && a == 57)
							{
								break;
							}
							else
							{
								_putchar('\n');
							}
							}
				}
			}
		}
	}
}
