#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Description: Prints the alphabet with _putchar ten times
 *
 * Return: void
 */


void print_alphabet_x10(void)
{
	char char_;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (char_ = 'a'; char_ <= 'z'; char_++)
		{
			_putchar(char_);
		}
		_putchar('\n');
	}
}
