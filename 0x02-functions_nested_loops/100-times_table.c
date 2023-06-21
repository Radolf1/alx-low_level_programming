#include "main.h"

/**
 * print_times_table - it prints the n times table, starting with 0
 * @n: character for the test
 * Return: sucess
 */

void print_times_table(int n)
{
	int product, mult, num;
if (n > -1 &&  n < 16)
{
for (num = 0; num < n; num++)
{
_putchar('0');
for (mult = 1; mult < n; mult++)
{
_putchar(',');
_putchar(' ');
product = num * mult;
if (product < 100)
_putchar(' ');
if (product < 10)
_putchar(' ');
if (product > 99)
{
_putchar((product / 100) + '0');
_putchar((product / 10) % 10 + '0');
}
else if (product < 100 && product > 9)
{
_putchar((product / 10) + '0');
}
_putchar((product % 10) + '0');
}
_putchar('\n');
}
}
}
