#include "main.h"

unsigned int binary_to_uint(const char *b)
{
    unsigned int uint = 0;
    int i, pow;

    if (b == NULL)
        return (0);

    for (i = 0; b[i] != '\0'; i++)
        ;
    i--;

    for (pow = 0; i >= 0; i--, pow++)
    {
        if (b[i] == '0')
            continue;

        if (b[i] == '1')
        {
            uint += _pow_recursion(2, pow);
            continue;
        }

        return (0);
    }

    return (uint);
}

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base
 * @y: exponent
 *
 * Return: x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
    if (y < 0)
        return (-1);

    if (y == 0)
        return (1);

    return (x * _pow_recursion(x, y - 1));
}
