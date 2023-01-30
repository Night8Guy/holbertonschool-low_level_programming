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
		putchar(ch);
	}
	for (ch = 'A'; ch < 91; ch++)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}
