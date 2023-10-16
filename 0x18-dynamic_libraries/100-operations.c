#include <stdio.h>

void add(a, b)
{
    return (a + b);
}

void sub(a, b)
{
    return (a - b);
}

void mul(a, b)
{
    return (a * b);
}

void div(a, b)
{
    if (b == 0)
        printf("you cant divide by 0\n");
    return(a / b);
}

void mod(a, b)
{
    if (b == 0)
        printf("you cant divide by 0\n");
    return(a % b); 
}