#include "main.h"

/**
 * print_sign - checks for integer sign
 * @int_: integer to check
 *
 * Return: 0 or 1
 */


int print_sign(int int_)
{
	if (int_ > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (int_ == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
