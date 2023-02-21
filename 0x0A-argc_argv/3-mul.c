#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - write a program that multuplies two numbers
* @argc: number of command line arguments
* @argv: array of command line arguments
* Return: 0 or 1
*/

int main(int argc, char *argv[])

{
	if (argc != 3)
	{
		printf("Error\n");
			return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
