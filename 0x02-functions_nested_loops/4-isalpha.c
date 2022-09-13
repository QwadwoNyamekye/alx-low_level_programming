#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: character to check
 *
 * Return: 0 or 1
 */


int _isalpha(int char_)
{
	if ((char_ >= 'a' && char_ <= 'z') || (char_ >= 'A' && char_ <= 'Z'))
		return (1);
	else
		return (0);
}
