#include <stdio.h>

/**
 * main -Using the putchar function
 * description - printing the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
char letter;

for (letter = 'z'; letter >= 'a'; letter--)
putchar(letter);

putchar('\n');

return (0);
}
