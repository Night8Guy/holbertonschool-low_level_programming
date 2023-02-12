/**
 * string_toupper - changes the lowercase letters
 * to uppercase in a string
 * @str: the string that is being changed
 * Return: a pointer that string
 */
#include "main.h"

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
	if (str[index] >= 'a' && str[index] <= 'z')
	str[index] -= 32;
	index++;
	}
	return (str);
}
