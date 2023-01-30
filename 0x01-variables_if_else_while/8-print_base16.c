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
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		putchar(ch);
	}
	for (ch = 97; ch < 103; ch++)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}
