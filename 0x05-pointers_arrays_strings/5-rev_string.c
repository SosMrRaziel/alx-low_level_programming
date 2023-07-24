#include "main.h"
/**
* print_rev - print the revers of an string
* @s: the pointer of the string
* Return: nothing
*/

void rev_string(char *s) {
    char *p = s;
    while (*p) {
        p++;
    }
    while (--p > s) {
        char c = *s;
        *s++ = *p;
        *p = c;
    }
}


