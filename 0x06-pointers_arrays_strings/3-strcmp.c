#include "main.h"

/**
 * _strcmp - this compares two strings
 * @s1: pointer to the string
 * @s2: pointer to the string
 * Return: value less than 0 if the string is less than the other
 * : value greater than 0 if the string is greater than the other
 * value 0 if the strings are equal
 */
int _strcmp(char *s1, char *s2)
{
	int i, cmpValue;

	i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	cmpValue = s1[i] - s2[i];
	return (cmpValue);

}
