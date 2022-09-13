#include "main.h"

/**
 * _islower - checks for lowercase letters
 * @char_: character to check
 *
 * Return: 0 or 1
 */


int _islower(int char_)
{
	if (char_ >= 'a' && char_ <= 'z')
		return (1);
	else
		return (0);
}
