#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (True)
 */
int main(void)
{
	char reverse;
for (reverse = 'z'; reverse >= 'a'; reverse--)
putchar(reverse);
putchar('\n');
return (0);
}
