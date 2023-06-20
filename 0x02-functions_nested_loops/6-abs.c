#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @c: The number being computed
 * Return: 0
 */

int _abs(int c)
{
if (c < 0)
{
int abs;
abs = c * -1;
return (abs);
}
return (c);
}
