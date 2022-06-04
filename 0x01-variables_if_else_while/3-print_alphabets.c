#include <stdio.h>

/**
 * main - print alphabet in lower and uppercase
 *
 * Return: (0) Success
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z') /*print lowercase a-z*/
	{
		putchar(lower);
		lower++;
	}
