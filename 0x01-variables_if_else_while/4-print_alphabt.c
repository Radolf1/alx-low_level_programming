#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (True)
 */
int main(void)
{
	char small, q, e;
for (small = 'a'; small <= 'z'; small++)
{
e = 'e';
q = 'q';
if (small != e && small != q)
{
putchar(small);
}
}
putchar('\n');
return (0);
}
