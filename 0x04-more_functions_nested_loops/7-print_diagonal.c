#include "main.h"

/**
 * print_diagonal - prints a diagonal line using \
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)

{

int len, space;

if (n > 0)
{

for (len = 0; len < n; len++)
{

for (space = 0; space < len; space++)
_putchar('_');
_putchar('\\');

if (len == n - 1)
continue;

_putchar('\n');

}

}

}
