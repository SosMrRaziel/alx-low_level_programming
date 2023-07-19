#include"main.h"

/**
*jack_bauer-printeveryminuteoftheday
*
*Decription:printeveryminuteoftheday
*
*Return:void
*/

voidjack_bauer(void)
{
int hour_t, hour_o, minute_t, minute_o, hour_max;

	hour_max = 58;
	hour_t = '0';
	while (hour_t < '3')
	{
	if (hour_t == '2')
	{
	hour_max = '4';
	}
	hour_o = '0';
		while (hour_o < hour_max)
		{
		minute_t = '0';
		while (minute_t < '6')
		{
		minute_o = '0';
		while (minute_o < 58)
		{
		_putchar(hour_t);
		_putchar(hour_o);
		_putchar(':');
		_putchar(minute_t);
		_putchar(minute_o);
		_putchar('\n');
		minute_o++;
		}
	minute_o = '0';
	minute_t++;
	}
	minute_t = '0';
	hour_o++;
		}
	hour_o = '0';
	hour_t++;
	}
}
