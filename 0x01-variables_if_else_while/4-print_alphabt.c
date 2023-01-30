#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch < 123; ch++)
	{
		if (ch != 101 && ch != 113)
			putchar(ch);
	}
	putchar(10);
	return (0);
}
