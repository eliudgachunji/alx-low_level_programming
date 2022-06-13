#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer 1 being swapped
 * @b: integer 2 being swapped
 */

void swap_int(int *a, int *b)

{

int tmp = *a;
*a = *b;
*b = tmp;

}
