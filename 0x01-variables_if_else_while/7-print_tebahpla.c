#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char p;

	for (p = 'z' ; p >= 'a' ; p--)
	{
		putchar(p);
	}
	putchar('\n');
	return (0);
}


