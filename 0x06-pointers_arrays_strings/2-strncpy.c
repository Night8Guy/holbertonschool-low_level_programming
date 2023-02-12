/**
 * _strncpy - copies at most an inputted number
 * of bytes from string into dest
 * @dest: location storing the string copy
 * @src: the source string
 * @n: maximum number of bytes copied
 * Return: a pointer to the resulting string dest
 */
#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
	src_len++;

	for (index = 0; src[index] && index < n; index++)
	dest[index] = src[index];

	for (index = src_len; index < n ; index++)
	dest[index] = '\0';

	return (dest);
}
