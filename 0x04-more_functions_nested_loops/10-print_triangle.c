#include "main.h"
#include <stdio.h>

/**
 *  print_triangle - print a triangle
 *  @size: is the size of the triangle
 *  Return: Always 0
 */

void print_triangle(int size)

{
	int i, j;

	
	for (i = 0; i <= size; i++)
	/* Prints one row of triangle */
	for (j = 0; j <= i; ++j)

	_putchar("#");
	/* move to next row */

	_putchar("\n");

	return 0;
}
