#include "main.h"
/**
* jack_bauer - prints every minute of the day of Jack Baue
* starting from 00:00 to 23:59
*/

void jack_bauer(void)
{
	int hr, mt;

	for (hr = 0; hr < 24; hr++)
	{
		for (mt = 0; mt < 60; mt++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((mt / 10) + '0');
			_putchar((mt % 10) + '0');
			_putchar('\n');
		}
	}
}
