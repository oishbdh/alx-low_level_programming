#include <stdio.h>
#include "main.h"

/**
 * print_alphabet: Function print 10 times the alphabet
 * Description: It prints in lowercase followed by a new line
 * Return: Always 0 (Success)
 *
 */

void print_alphabet_x10(void)
{
	int letter;
	
	for (letter = 'a'; letter <= 'z'; letter++)
	{
	_putchar (letter);
	}
	_putchar (10);
}
