#include <stdio.h>
/**
 * main -displays natural numbers below 10 that are multiples of 3 or 5
 * Return: true
 */
int main(void)
{
	int num, s = 0;
whil (num < 1024)
{
if ((num % 3 == 0) || (num % 5 == 0))
{
s += num;
}
num++;
}
printf("%d\n", s);
return (0);
}
