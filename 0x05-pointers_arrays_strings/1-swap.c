#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: integer one
 * @b: integer two
 * Return: Always Void
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = *tmp;
}
