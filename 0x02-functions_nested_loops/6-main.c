#include "main.h"
#include <stdio.h>

/* function declaration */
int _abs(int b);

/**
 * main - check the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	 int r;

	     r = _abs(-1);
	     printf("%d\n", r);
	     r = _abs(0);
	     printf("%d\n", r);
	     r = _abs(1);
	     printf("%d\n", r);
	     r = _abs(-98);
	     printf("%d\n", r);
	return (0);
}
