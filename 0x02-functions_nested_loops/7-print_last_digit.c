#include "main.h"

/**
 * print_last_digit - prints last digit of integer input
 * @int_: integer to modify
 *
 * Return: l
 */


int print_last_digit(int int_)
{
	int l, p;

	l = int_ % 10;
	if (l <  0)
		l = -l;
	p = '0' + l;
	_putchar(p);
	return (l);
}
