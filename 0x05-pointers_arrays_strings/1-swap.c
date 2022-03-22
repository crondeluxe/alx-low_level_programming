#include "main.h"

/**
 * swap_int - this swaps the value of two integers
 * @a: a pointer to the integer
 * @b: another pointer to the integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
