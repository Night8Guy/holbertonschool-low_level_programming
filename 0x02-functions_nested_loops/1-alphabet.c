#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 on Success
*/
void print_alphabet(void)
{
	int start = 97, end = 122;

	while (start <= end)
	{
		_putchar(start);
		start++;
	}
	_putchar('\n');
}
