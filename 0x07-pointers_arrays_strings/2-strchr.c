#include "main.h"

/**
 * _strchr - locate character in string
 * @s: pointer to the string
 * @c: character to find
 * Return: the string from character found
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	int b;

	while (s[a])
	{
		a++
	}
	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}
	return ('\0');
}
