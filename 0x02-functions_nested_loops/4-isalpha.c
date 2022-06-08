#include "main.h"

/**
 * _isapha check for alphabetic character
 * @c will check take the bellow instruction and act upon it
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

