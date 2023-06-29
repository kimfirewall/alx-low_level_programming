#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int x, y, z;

	x = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (x < size)
	{
		z = size - x < 10 ? size - x : 10;
		printf("%08x: ", x);
		for (y = 0; y < 10; y++)
		{
			if (y < z)
				printf("%02x", *(b + x + y));
			else
				printf("  ");
			if (y % 2)
			{
				printf(" ");
			}
		}
		for (y = 0; y < z; y++)
		{
			int c = *(b + x + y);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		x += 10;
	}
}
