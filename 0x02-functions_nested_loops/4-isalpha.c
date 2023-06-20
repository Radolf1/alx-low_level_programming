#include "main.h"
/**
 * _isalphh - looks for alphabet
 * @c: The character to be checked
 * Return: 1 for alphabet and 0 for other characters
 */
int _isalpha(int c)
{
if ((c > 64 && c < 91) || (c > 96 && c < 123))
{
return (1);
}
return (0);
}
