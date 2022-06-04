#include <stdio.h>
/**
 * main - Entry point
 * main - print lowercase a-z
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char c;
        char alpha = 'a';

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	        putchar('\n');
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

		return (0);
return (0);
