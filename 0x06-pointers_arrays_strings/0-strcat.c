i#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 * Return: dest
 * Returns a pointer to the resulting string.
 *
 */
char *_strcat(char *dest, char *src)
{
	int x, z;

	x = 0;
	while (dest[x] != '\0')
		x++;
	z = 0;
		while (src[z] != '\0')
		{
			dest[x] = src[z];
			x++;
			z++;
		}
	dest[x] = '\0';
	return (dest);
}
