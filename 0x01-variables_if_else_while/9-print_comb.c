#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (True)
 */
int main(void)
{
int fig;
for (fig = '0'; fig <= '9'; fig++)
{
putchar(fig);
if (fig != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
