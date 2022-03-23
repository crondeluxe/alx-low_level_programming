#include "main.h"
#include <string.h>

/**
 * _strlen: this prints the length of a string
 * @s: points to the string
 * Return: int
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
