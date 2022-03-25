#include "main.h"

/**
 * _strncpy - this copies src strings to dest in a given numuber of byte n
 * @dest: pointer to the string destination
 * @src: pointer to the source destination
 * @n: number of bytes
 * Return: strings at the destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
	dest[i] = '\0';
	}
	return (dest);
}
