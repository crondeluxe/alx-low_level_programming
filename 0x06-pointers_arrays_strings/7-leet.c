#include "main.h"

/**
 * leet - encodes a string into 1337
 * a and A are replaced by 4
 * e and E are replaced by 3
 * o and O are replaced by 0
 * t and T are replaced by 7
 * l and L are replaced by 1
 * @s: pointer to string
 * Return: pointer to string
 */
char *leet(char *s)
{
	int stringCnt = 0;
	int leetCnt = 0;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNum[] = "4433007711";

	while (s[stringCnt] != '\0')
	{
		while (leetCnt < 10)
		{
			if (leetLetters[leetCnt] == s[stringCnt])
			{
				s[stringCnt] = leetNum[leetCnt];
			}
			leetCnt++;
		}
		stringCnt++;
	}
	return (s);


}
