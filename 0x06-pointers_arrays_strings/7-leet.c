/**
 * leet - encodes string 
 * @str: the string being changed/encoded
 * Return: a pointer to encoded sting
 */
#include "main.h"
char *leet(char *str)
{
	int index = 0, index2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[index])
	{
		for (index2 = 0; index2 <= 7; index2++)
		{
			if (str[index] == leet[index2] ||
			str[index] - 32 == leet[index2])
				str[index] = index2 + '0';
		}

		index++;
	}
	return (str);
}
