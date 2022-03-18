#include "main.h"

/**
 * times_table - prints 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int a, b;
	int result;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			result = a * b;
			if (b == 0)
			{
				_putchar('0' + result);
			}
			
			else if ( result >= 10)
			{
				_putchar(' ');
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
			}

			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}

			if ( b != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
