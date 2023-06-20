#include "main.h"
/**
 * _islower -it search for lower characters
 * @c: will be used
 * Return: 1 for lower character and 0 for any character
 */

int _islower(int c)
{
if (c > 96 && c < 123)
{
return (1);
}
return (0);
}
