#include "main.h"

/**
 *swap the values of the pointed arguments
 *
 *@a: pointer argument 1
 *@b: pointer argument 2
 */
void swap_int(int *a, int *b)
{
	int con = *a;

	*a = *b;
	*b = con;
}
