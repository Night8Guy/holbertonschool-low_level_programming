/**
 * _strcmp - compares pointer tp two stings
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 * Return: str1 < str2, the negative difference of the
 * first unmatched characters
 * if str1 == str2, 0
 */
#include "main.h"

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
