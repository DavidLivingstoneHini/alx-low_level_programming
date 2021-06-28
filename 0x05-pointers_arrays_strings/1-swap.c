#include "holberton.h"

/**
 * swap_int - swaps the values of a and b
 * @a: pointer 1
 * @b: pointer 2
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
