#include "main.h"

/**
 * reverse_array - this reverse strings in an array
 * @a: pointer to the array
 * @n: number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	n = n - 1;
	i = 0;

	while (i <= n)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n--] = temp;
	}
}
