#include <stdio.h>

/**
 * main - Using main function
 * description - printing all single digit numbers with
 * base 10 starting with 0
 * Return: 0
 */
int main(void)
{
int num;

for (num = 0; num < 10; num++)
putchar((num % 10) + '0');

putchar('\n');

return (0);

}
