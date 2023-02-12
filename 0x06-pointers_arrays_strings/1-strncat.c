/**
 * _strncat - two strings at most
 *
 * an inputted number of bytes from src
 * @dest: the string to be appended upon
 * @src: the string to be changed
 * @n: the number of bytes from src to be changed to dest
 * Return: a pointer to the resulting string dest
 */
#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;

	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];

	return (dest);
}
