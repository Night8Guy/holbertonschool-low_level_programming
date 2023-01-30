#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - see description
 * Description: Print alpha 10 times
 * Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	int i, x;

	for (x = 0; x < 10; x++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar(10);
	}
}
