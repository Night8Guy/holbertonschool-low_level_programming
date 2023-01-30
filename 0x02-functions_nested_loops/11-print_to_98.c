#include <stdio.h>

/**
 * print_to_98 -prints all natural numbers from n to 98
 *
 * @n: start of natural numbers
 *
 * Return: Always 0
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
		printf("%d", n);
		if (n != 98)
			printf(", ");
				n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n);
			n++;
		}
	}
	putchar('\n');
}
