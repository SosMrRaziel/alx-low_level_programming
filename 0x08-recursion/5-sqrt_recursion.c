#include "main.h"


int _sqrt_recursive(int n)
{
    if (n < 0)
        return (-1);
    if (n == 0 || n == 1)
        return (n);
    return (_sqrt_recursive_helper(n, n / 2));
}

int _sqrt_recursive_helper(int n, int i)
{
    if (i * i == n)
        return (i);
    if (i <= 0)
        return (-1);
    return (_sqrt_recursive_helper(n, i - 1));
}
