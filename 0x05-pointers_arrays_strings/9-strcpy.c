#include "main.h"

/**
 * _strcpy - Copies a string pointed to by @src, including the
 *   null byte, to a buffer pointed to by @dest.
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strcpy(char *dest, const char *src)
{
	int cont = 0;

	do {
		*(dest + cont) = *(src + cont);
		const++;
	} 
	while (*(src + cont - 1) != '\0');
	return (dest);
}
