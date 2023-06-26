#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * puts2 - prints other characters of string
 * @atr: the string to test
 * Return: void
 */
void puts2(char *str)
{
	int i, j = 0;
while (str[j] != '\0')
{
j++;
}
for (i = 0; i < j; i += 2)
{
putchar(str[i]);
}
putchar('\n');
}
