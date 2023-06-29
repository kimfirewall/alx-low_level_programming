#include "main.h"
/**
 *  _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int x, z;
x = 0;
z = 0;
while (dest[x] != '\0')
x++;
while (src[z] != '\0' && z < n)
{
dest[x] = src[z];
x++;
x++;
}
dest[z] = '\0';
return (dest);
}
