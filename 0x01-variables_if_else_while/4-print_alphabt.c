#include <stdio.h>
/**
  *main - Entry point
  *
  *Return: 0 (Success)
*/
int main(void)
{
	int x = 97;

	while (x <= 122)
	{
		if (x == 102 || x == 113)
		{
			x++;
			continue;
		}
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}

