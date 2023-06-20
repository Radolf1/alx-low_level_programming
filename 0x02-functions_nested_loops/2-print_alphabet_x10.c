#include "main.h"
/**
 * main - entry
 * return: void
 */
void print_alphabet_x10(void)
{
char c;
int num = 0;
while (num < 10)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
_putchar('\n');
num++;
}
}
}
