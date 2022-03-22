#include <stdio.h>

/* function declaration */
void fizz_buzz(void);
/**
 * main - call the function fizz_buzz to print
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
/**
 * fizz_buzz - prints 1-100, fizz, buzz, and fizzbuzz for multiple of 3,5,3 & 5
 *
 * Return: void
 */
void fizz_buzz(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 15) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((a % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((a % 5) == 0)
		{
			printf("Buzz ");
		}
		else
			printf("%d ", a);
	}
	printf("\n");
}
