#include "main.h"
#include <stdio.h>
/**
 * _abs - see description
 * @n: number
 * Description: Print alpha 10 times
 * Return: Always 0 (Success)
*/
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		int x = n * -1;

		return (x);
	}
}
