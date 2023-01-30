#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - see description
 * @n: number
 * Description: Print alpha 10 times
 * Return: Always 0 (Success)
*/
int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
	{
		x = x * -1;
	}

	_putchar(x + '0');
	return (x);
}
