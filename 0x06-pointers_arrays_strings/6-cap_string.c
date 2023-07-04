#include "main.h"
/**
 * cap_string - capitalizes everey word of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *s)
{
int x, z;
char spe[13] = {' ', '\t', '\n', ',', ';', '.',
'!', '?', '"', '(', ')', '{', '}'};
for (x = 0; s[x] != '\0'; x++)
{
if (x == 0 && s[x] >= 'a' && s[x] <= 'z')
s[x] -= 32;
for (z = 0; z < 13; z++)
{
if (s[x] == spe[z])
{
if (s[x + 1] >= 'a' && s[x + 1] <= 'z')
{
s[x + 1] -= 32;
}
}
}
}
return (s);
}
