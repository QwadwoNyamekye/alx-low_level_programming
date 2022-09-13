#include "holberton.h"

/**
 * main - entry point
 *
 * Description: Prints _putchar with _putchar
 *
 * Return: always 0
 */

int main(void)
{
	int i = 0;
	char char_;
	char char_arr[] = "_putchar\n";

	while (i <= 9)
	{
		char_ = char_arr[i];
		_putchar(char_);
		i++;
	}
	return (0);
}
