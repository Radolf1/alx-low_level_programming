#include "main.h"
/**
 * print_times_table - it prints the times table of the input
 * starting with 0
 * @n: character for the test
 */

void print_times_table(int n)
{
	int prod, mult, num;
if (n >= 0 &&  n <= 15)
{
for (num = 0; num <= n; num++)
{
_putchar('0');
for (mult = 1; mult <= n; mult++)
{
_putchar(',');
_putchar(' ');
prod = num * mult;
if (prod < 100)
_putchar(' ');
if (prod < 10)
_putchar(' ');
if (prod > 99)
{
_putchar((prod / 100) + '0');
_putchar((prod / 10) % 10 + '0');
}
else if (prod < 100 && prod > 9)
{
_putchar((prod / 10) + '0');
}
_putchar((prod % 10) + '0');
}
_putchar('\n');
}
}
}
