#include <stdio.h>
#include "main.h"

/**
 *print_alphabet - function that prints alphabet
 *Description: It prints in lowercase
 *
 *Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	_putchar (letter);
	}
	_putchar (10);
}
