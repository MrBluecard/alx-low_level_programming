#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @p: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int p)
{
	int a;

	if (p < 0)
		p = -p;

	a = p % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);

}

