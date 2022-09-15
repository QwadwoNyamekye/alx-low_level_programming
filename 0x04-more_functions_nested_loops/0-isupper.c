#include "main.h"
/**
 * _isupper - checks if letters are uppercase
 * @in: input
 *
 *Return: 1 if in is uppercase
 * 0 otherwise
 */
int _isupper(int in)
{
    if ((in >= 'A') && (in <= 'Z'))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
