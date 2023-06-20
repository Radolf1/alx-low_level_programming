#include "main.h"
/**
 * _isalphh - looks for alphabet
 * @c: checks for alphabet
 * Return: 1 for alphabet and 0 for other characters
 */
int _isalpha(int c)
{
if ((c > 64 && c <91) || (c > 96 && c < 123))
{
return (1);
}
return (0);
}
