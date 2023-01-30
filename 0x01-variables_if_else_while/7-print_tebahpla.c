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

	for (ch = 122; ch > 96; ch--)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}
