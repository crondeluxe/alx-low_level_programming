#include "main.h"

/**
 * string_toupper - this changes the lowercase in a string to uppercase
 * @s: pointer to the string
 * Return: pointer to uppercase string
 */
char *string_toupper(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		if (s[l] >= 92 && s[l] <= 122)
		{
			s[l] = s[l] - 32;
		}
		l++;
	}
	return (s);
}
