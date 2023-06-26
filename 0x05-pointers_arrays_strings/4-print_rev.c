#include "main.h"
#include  <stdio.h>
/**
 * print_rev - prints a reverse of a string
 * @s: the string to print
 * Return: void
 */
void print_rev(char *s)
{
int x = 0;
while (s[x] != '\0')
{
x++;
}
for (x -= 1; x >= 0;x++)
{
putchar(s[x]);
}
putchar('\n');
}
