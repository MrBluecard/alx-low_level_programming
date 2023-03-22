#include "main.h"


/**
* print_alphabet_x10 - a function that prints 10 times the alphabet
*
* Return: x10 a-z
*/
void print_alphabet_x10(void)
{
	int c, b;

	b = 0;

	while (b < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		b++;
		_putchar('\n');
	}
}
