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

	for (p = 'a' ; p <= 'z' ; p++)
	{
		putchar(p);

	}

	for (p = 'A' ; p <= 'Z' ; p++)
	{
		putchar(p);
	}
	putchar('\n');
	return (0);
}

