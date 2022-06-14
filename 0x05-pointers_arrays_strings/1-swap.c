#include "main.h"

/**
 * swap_int - swap between a & b
 * @a: A pointer to an int that will be updated
 * @b: B pointer to an int that will be updated
 * Return: void
 */

void swap_int(int *a, int *b)
{
	 int z; /*variable dclaration*/

	 z = *a; /*Z is the value of a*/
	 *a = *b; /*a is the value of b*/
	 *b = z; /*b is the value of a*/
}
