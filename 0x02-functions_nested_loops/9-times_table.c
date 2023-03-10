#include "main.h"
#include <stdio.h>
/**
 * 9 times_table -  see description
 * Description: Print the 9 times_table starting at 9
 * Return: Always 0 (Success)
*/
void times_table(void)
{
	int s = 0, e = 9, count = 0;

	while (count <= 9)
	{
		while (s <= e)
		{
			int product = count * s;

			if (s != 0)
			{
				_putchar(',');
				if (product < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
					_putchar(' ');
			}

			if (product < 10)
				_putchar(product + '0');
			else
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}

			if (s == e)
				_putchar('\n');
			s++;
		}
		s = 0;
		count++;
	}
}
