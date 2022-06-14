#include "main.h"

/**
 * _strlen - lenth of a string
 * @s: A pointer to an int that will be updated
 *
 * Return: void
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0') /*To count charater of strings*/
	{
		i++;
	}
	return (i);
}
