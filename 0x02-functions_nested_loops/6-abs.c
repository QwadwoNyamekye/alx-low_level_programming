#include "main.h"

/**
 * _abs - outputs absolut value of integer input
 * @int_: integer to check
 *
 * Return: int_
 */


int _abs(int int_)
{
	if (int_ >= 0)
		return (int_);

	else
	{
		int_ *= -1;
		return (int_);
	}
}
