#include "main.h"

/**
 * _strcat - this adds src strings to the end of the dest strings
 * @dest: pointer to the destination strings
 * @src: pointer to source strings
 * Return: concatenated strings in the destination
 */
char *_strcat(char *dest, char *src)
{
	int length, i;

	length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
		for (i = 0; src[i] != '\0'; i++, length++)
		{
			dest[length] = src[i];
		}
	dest[length] = '\0';
	return (dest);
}
