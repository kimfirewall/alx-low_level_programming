#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *s)
{
	int x, z;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (z = 0; z < 10; z++)
		{
			if (s[x] == a[z])
			{
				s[x] = b[z];
			}
		}
	}

	return (s);
}
