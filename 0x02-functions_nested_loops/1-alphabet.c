#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Description: Prints the alphabet with _putchar
 *
 * Return: void
 */


void print_alphabet(void)
{
	char char_;

	for (char_ = 'a'; char_ <= 'z'; char_++)
	{
		_putchar(char_);
	}
	_putchar('\n');
}
