#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all the integers between the number given and 98
 * @n: number to count from
 *
 * Return: void
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}

	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}

	if (n == 98)
		printf("%d", n);

	printf("\n");
}
