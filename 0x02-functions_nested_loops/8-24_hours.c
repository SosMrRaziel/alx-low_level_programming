#include "main.h"

void jack_bauer(void)
{
    for (int hour = 0; hour < 24; hour++)
    {
        for (int minute = 0; minute < 60; minute++)
        {
           _putchar((hour / 10) + '0');
           _putchar((hour % 10) + '0');
           _putchar(':');
           _putchar((minute / 10) + '0');
           _putchar((minute % 10) + '0');
           _putchar('\n');
        }
    }
}

int main(void)
{
    jack_bauer();
    return 0;
}
