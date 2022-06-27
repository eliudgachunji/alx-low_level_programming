#include "main.h"

/**
 * _isalpha - checks if character is alphabet
 * @c: character being checked
 * Return: 1 if character is uppercase, lowercase or letter, 0 otherwise
 */
int _isalpha(int c)

{

if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
return (1);

else
return (0);

}
