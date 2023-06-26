#include "main.h"
/**
 * _atoi - convert a string to integer
 * @s: the pointer to convert
 * Return: true
 */
int _atoi(char *s)
{
int c = 0;
unsigned int an = 0;
int min = 1;
int man = 0;
while (s[c])
{
if (s[c] == 45)
{
min *= -1;
}
while (s[c] >= 48 && s[c] <= 57)
{
man = 1;
an = (an * 10) + (s[c] - '0');
c++;
}
if (man == 1)
{
break;
}
c++;
}
an *= min;
return (an);
}
