#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (True)
 *
 */
int main(void)
{
	int base;
	char alpha;
for (base = '0'; base <= '9'; base++)
putchar(base);
for (alpha = 'a'; alpha <= 'f'; alpha++)
putchar(alpha);
putchar('\n');
return (0);
}
