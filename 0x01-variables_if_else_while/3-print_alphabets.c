#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (True)
 */
int main(void)
{
	char small;
for (small = 'a'; small <= 'z'; small++)
putchar(small);
for (small = 'A'; small <= 'Z'; small++)
putchar(small);
putchar('\n');
return (0);
}
