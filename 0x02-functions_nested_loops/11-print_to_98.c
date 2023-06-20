#include "main.h"
#include <stdio.h>
/**
 * print_to_98- it  prints all natural numbers from n to 98
 * @n: the number to comput
 * Return: 0 (true)
 */
void print_to_98(int n)
{
if (n < 99)
{
for (n = 0; n < 99; n++)
{
if (n == 98)
{
printf("%d", n);
printf("\n");
break;
}
else
{
printf("%d", n);
}
}
}
else
{
for (n = 0; n > 97; n--)
{
if (n == 98)
{
printf("%d", n);
printf("\n");
break;
}
else
{
printf("%d", n);
}
}
}
}
