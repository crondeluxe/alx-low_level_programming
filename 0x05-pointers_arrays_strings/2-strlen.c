#include "main.h"

/**
 *_strlen - finds and output length of strings
 * @s: points to the string
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
