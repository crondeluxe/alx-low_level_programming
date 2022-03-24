#include "main.h"

/**
 * _strncat - this add dest strings to the src strings at n bytes
 * @dest: pointer to the string destination
 * @src: pointer to the source string
 * @n: number of bytes
 * Return: strings in destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int l, i;

	l = 0;

	while (dest[l] != '\0')
	{
		l++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++, l++)
	{
		dest[l] = src[i];
	}
	dest[l] = '\0';
	return (dest);
}
