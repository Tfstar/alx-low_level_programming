#include "main.h"
/**
 * _puts - prints a string
 * @str: A pointer to an int that will be updated
 *
 * Return: void
 */

void _puts(char *str)
{
	char *c;
	int m;

	c = str;

	for (m = 0; c[m]; m++) /*Counting a character by character*/
	{
		_putchar (c[m]);
	}
	_putchar('\n');
}