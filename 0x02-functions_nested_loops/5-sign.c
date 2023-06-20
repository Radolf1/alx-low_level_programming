#include "main.h"
/**
 * print_sign - Display number sign
 * @n: Search for the numbers
 * Return: 1 search for positive numbers and -1 for negative numbers and 0 for anything
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
