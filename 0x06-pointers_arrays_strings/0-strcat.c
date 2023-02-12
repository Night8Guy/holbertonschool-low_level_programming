/**
 * _strcat - concentrates two strings
 * @dest: final string
 * @src: source string
 * Return: a pointer to the resulting string dest
 */
#include <stdio.h>
#include "main.h"

char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i]  != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}
